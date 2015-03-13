//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>

//OpenCV headers
#include <opencv2/opencv.hpp>

//RaspiCAM headers
#ifdef __arm__
#include "RaspiCamCV.h"
#endif

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Vision
{
  namespace Color_Tracking
  {
    using DUNE_NAMESPACES;
    
    struct Arguments
    {
      //Low Red value
      int ilow_r;
      //High Red value
      int ihigh_r;
      //Low Green value
      int ilow_g;
      //High Green value
      int ihigh_g;
      //Low Blue value
      int ilow_b;
      //High Blue value
      int ihigh_b;
      //Min area of color mass
      int min_area;
      //Max area of color mass
      int max_area;
    };
    
    struct Task: public DUNE::Tasks::Task
    {
      //!Variables
      #ifdef __arm__
      //RaspiCam config
      RASPIVID_CONFIG * config;
      //Capture struct - OpenCV/RaspiCAM
      RaspiCamCvCapture* capture;
      #else
      //Capture struct - OpenCV
      CvCapture* capture;
      #endif
      //Read time and data
      struct tm* local;
      //IplImage image_capture
      IplImage* img;
      //IplImage main
      IplImage* frame;
      //Step of data image
      int step;
      //Image data
      uchar* data;
      //Number of channels of image
      int channels;
      //Threshold imageof main frame
      IplImage* threshold_img;
      //Buffer for video frame
      CvVideoWriter *writer;
      //Define Font Letter OpenCV
      CvFont font;
      //Struct for mass centers
      CvMoments* moments;
      //X parameter of CvMoments
      double moment10;
      //Y parameter of CvMoments
      double moment01;
      //Area of mass
      double area;
      //Main frame width
      int frame_width;
      //Main frame height
      int frame_height;
      //width Inic
      int inic_width;
      //height Inic
      int inic_height;
      //key press
      char key;
      //Buffer text for frame result
      char text[80];
      //Buffer text for directory for log
      char local_dir[80];
      //User Name
      const char* user_name;
      //Position of 1º Pixel of TPL in width
      int object_x;
      //Position of 1º Pixel of TPL in height
      int object_y;
      //button press of mouse
      int button;
      //Global counter
      int cnt;
      //Flag - Showm options
      bool flag_options;
      //Flag - stat of video record
      bool flag_stat_video;
      //Flag - start record
      bool flag_start;
      //!Variables Time
      int hour;
      int min;
      int sec;
      int day;
      int mon;
      int year;
      
      //! Task arguments.
      Arguments m_args;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
      DUNE::Tasks::Task(name, ctx)
      {      
        param("Low Red value", m_args.ilow_r)
        .defaultValue("150")
        .minimumValue("0")
        .maximumValue("255")
        .description("Low Red value");
        
        param("High Red value", m_args.ihigh_r)
        .defaultValue("150")
        .minimumValue("0")
        .maximumValue("255")
        .description("High Red value");
        
        param("Low Green value", m_args.ilow_g)
        .defaultValue("150")
        .minimumValue("0")
        .maximumValue("255")
        .description("Low Green value");
        
        param("High Green value", m_args.ihigh_g)
        .defaultValue("150")
        .minimumValue("0")
        .maximumValue("255")
        .description("High Green value");
        
        param("Low Blue value", m_args.ilow_b)
        .defaultValue("150")
        .minimumValue("0")
        .maximumValue("255")
        .description("Low Blue value");
        
        param("High Blue value", m_args.ihigh_b)
        .defaultValue("150")
        .minimumValue("0")
        .maximumValue("255")
        .description("High Blue value");

        param("Min area of color mass", m_args.min_area)
        .defaultValue("50")
        .minimumValue("0")
        .maximumValue("6000")
        .description("Min area of color mass");
        
        param("Max area of color mass", m_args.max_area)
        .defaultValue("1100")
        .minimumValue("0")
        .maximumValue("6000")
        .description("Max area of color mass");
      }
      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }
      
      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }
      
      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }
      
      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }
      
      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        object_x = frame_width/2;
        object_y = frame_height/2;
      }
      
      //! Release resources.
      void
      onResourceRelease(void)
      {
      }
      
      //!Draw a dashed line
      void
      DashedLine( IplImage* image, CvPoint p1, CvPoint p2, CvScalar color, int interval, bool axis)
      {
        cnt = 0;
        //Vertical
        if (!axis)
        {
          while (cnt < p2.y)
          {
            cvLine(image, cvPoint(p1.x, p1.y + cnt), cvPoint(p2.x, cnt + interval), color, 1, 8, 0);
            cnt = cnt + interval*2;
          }
        }
        //Horizontal
        else
        {
          while (cnt < p2.x)
          {
            cvLine(image, cvPoint(p1.x + cnt, p1.y), cvPoint(cnt + interval, p2.y), color, 1, 8, 0);
            cnt = cnt + interval*2;
          }
        }
      }
      //! Initialize Values
      void 
      InicValues(void)
      {
        cnt = 0;
        flag_start = 0;
        flag_stat_video = 0;
        flag_options = 0;
        
        #ifdef __arm__
        config = (RASPIVID_CONFIG*)malloc(sizeof(RASPIVID_CONFIG));
        config->width = inic_width;
        config->height = inic_height;
        config->bitrate = 0; // zero: leave as default
        config->framerate = 24;
        config->monochrome = 0;
        inic_width = 480;
        inic_height = 360;
        #else
        inic_width = 640;
        inic_height = 480;
        #endif
      }
      
      /* Save Video Frame Result */
      void save_video(IplImage* image, bool parameter)
      {
        if (flag_stat_video == 0 && parameter == 1)
        {
          #ifdef linux
          sprintf(local_dir,"mkdir /home/$USER/%d_%d_%d_log_video -p",day,mon,year);
          button = system(local_dir);
          user_name = getenv ("USER");
          sprintf(local_dir,"/home/%s/%d_%d_%d_log_video", user_name, day, mon, year);
          sprintf(text,"%s/%d_%d_%d___%d_%d_%d.avi",local_dir,hour,min,sec,day,mon,year);
          #endif
          
          #ifdef _WIN32
          button = system("cd C:\ ");
          sprintf(local_dir,"mkdir %d_%d_%d_log_video",day,mon,year);
          button = system(local_dir);
          sprintf(local_dir,"C:\%d_%d_%d_log_video",day,mon,year);
          sprintf(text,"%s\%d_%d_%d___%d_%d_%d.avi",local_dir,hour,min,sec,day,mon,year);
          #endif
          
          writer = cvCreateVideoWriter(text, CV_FOURCC('M','J','P','G'), 8, cvGetSize(image), 1);
          flag_stat_video = 1;
        }
        
        if (flag_stat_video == 1 && parameter == 1)
          cvWriteFrame(writer, image);      // add the frame to the file
          else if (flag_stat_video == 1 && parameter == 0)
          {
            cvReleaseVideoWriter( &writer );
            flag_stat_video = 0;
          }
      }
      
      /* Save Image Result*/
      void
      save_image(IplImage* image)
      {
        #ifdef linux
        sprintf(local_dir,"mkdir /home/$USER/%d_%d_%d_log_image -p",day,mon,year);
        button = system(local_dir);
        user_name = getenv ("USER");
        sprintf(local_dir,"/home/%s/%d_%d_%d_log_image", user_name, day, mon, year);
        sprintf(text,"%s/%d_%d_%d___%d_%d_%d.jpg",local_dir,hour,min,sec,day,mon,year);
        #endif
        
        #ifdef _WIN32
        button = system("cd C:\ ");
        sprintf(local_dir,"mkdir %d_%d_%d_log_image",day,mon,year);
        button = system(local_dir);
        sprintf(local_dir,"C:\%d_%d_%d_log_image",day,mon,year);
        sprintf(text,"%s\%d_%d_%d___%d_%d_%d.jpg",local_dir,hour,min,sec,day,mon,year);
        #endif
        
        cvSaveImage(text, image);
      }
      
      /*Time acquisition */
      void
      time_acquisition(void)
      {
        time_t t;
        t = time(NULL);
        local = localtime(&t);
        
        hour = local -> tm_hour;
        min = local -> tm_min;
        sec = local -> tm_sec;
        day = local -> tm_mday;
        mon = local -> tm_mon + 1;
        year = local -> tm_year + 1900;
      }
      /* mouse handler */
      void 
      MouseHandler( int event, int x, int y, int flags, void*)
      {
        button = flags;
        /* user clicked the image, save pixel color */
        if ( event == CV_EVENT_LBUTTONUP )
        {
          step  = frame->widthStep;
          data = (uchar*) frame->imageData;
          channels= frame->nChannels;
          m_args.ilow_b = data[y*step + x*channels] - 10;
          m_args.ihigh_b = data[y*step + x*channels] + 10;
          m_args.ilow_g = data[y*step + x*channels+1] - 10;
          m_args.ihigh_g = data[y*step + x*channels+1] + 10;
          m_args.ilow_r = data[y*step + x*channels+2] - 10;
          m_args.ihigh_r = data[y*step + x*channels+2] + 10;
        }
      }
      /* mouse handler - STATIC */
      static void 
      MouseWrapper(int event, int x, int y, int flags, void* opt) 
      {
        Task* cal = (Task*)opt; // cast back to 'this'
        // now call your member-function.
        cal->MouseHandler(event, x, y, flags, 0);
      }
      /* Tracking object-color */
      void
      TrackColor()
      {
        cvReleaseImage( &threshold_img );
        if ( threshold_img == 0 )
          threshold_img = cvCreateImage( cvGetSize(frame), 8, 1);
        
        cvInRangeS(frame, cvScalar(m_args.ilow_b, m_args.ilow_g, m_args.ilow_r, 0), cvScalar(m_args.ihigh_b, m_args.ihigh_g, 
m_args.ihigh_r, 0), threshold_img);
        
        //morphological opening (removes small objects from the foreground)
        cvErode(threshold_img, threshold_img, 0, 1);
        cvDilate(threshold_img, threshold_img, 0, 1);
        //morphological closing (removes small holes from the foreground)
        cvDilate(threshold_img, threshold_img, 0, 1);
        cvErode(threshold_img, threshold_img, 0, 1);
        
        //Calculating the moments
        moments = (CvMoments*)malloc(sizeof(CvMoments));
        cvMoments(threshold_img, moments, 1);
        // The actual moment values
        moment10 = cvGetSpatialMoment(moments, 1, 0);
        moment01 = cvGetSpatialMoment(moments, 0, 1);
        area = cvGetCentralMoment(moments, 0, 0);
        if (area > m_args.min_area && area < m_args.max_area)
        {
          //Calculating the current position
          object_x = moment10/area;
          object_y = moment01/area;
          cvCircle(frame, cvPoint( object_x, object_y ), 20, cvScalar( 240, 180, 55, 0 ), 2, 8, 0);
        }
        else
          cvCircle(frame, cvPoint( object_x, object_y ), 20, cvScalar( 55, 180, 240, 0 ), 2, 8, 0);
      }
      /* Check if the news values are correct */
      void
      CheckNewValues()
      {
        if (m_args.ilow_b > m_args.ihigh_b)
          m_args.ihigh_b = m_args.ilow_b + 1;
        if (m_args.ilow_g > m_args.ihigh_g)
          m_args.ihigh_g = m_args.ilow_g + 1;   
        if (m_args.ilow_r > m_args.ihigh_r)
          m_args.ihigh_r = m_args.ilow_r + 1;
        if (m_args.min_area > m_args.max_area)
          m_args.max_area = m_args.min_area + 10;
      }
      //! Main loop.
      void
      onMain(void)
      {
        //Initialize Values
        InicValues();
        
        #ifdef __arm__
        capture = (RaspiCamCvCapture *) raspiCamCvCreateCameraCapture2(0, config);
        #else
        capture = cvCaptureFromFile("rtsp://10.0.20.207:554/live/ch00_0"); //for airvision mini SENS-11
        //capture = cvCaptureFromCAM(0);//for laptop cam
        //capture = cvCaptureFromFile("http://10.0.20.112/axis-cgi/mjpg/video.cgi?.mjpg"); //for axis cam
        //capture = cvCaptureFromFile("http://10.0.3.31:8080/video.wmv"); //for stream video
        #endif
        
        while ( capture  == 0 && cnt < 4 && !stopping())
        {
          inf("\n\tERROR OPEN CAM\n");
          #ifdef __arm__
          capture = (RaspiCamCvCapture *) raspiCamCvCreateCameraCapture2(0, config);
          #else
          capture = cvCaptureFromFile("rtsp://10.0.20.207:554/live/ch00_0"); //for airvision mini SENS-11
          //capture = cvCaptureFromCAM(0);//for laptop cam
          //capture = cvCaptureFromFile("http://10.0.20.112/axis-cgi/mjpg/video.cgi?.mjpg"); //for axis cam
          //capture = cvCaptureFromFile("http://10.0.3.31:8080/video.wmv"); //for stream video
          #endif
          cnt++;
          waitForMessages(1.0);
        }
        
        //Capture Image
        #ifdef __arm__
        img = raspiCamCvQueryFrame(capture);
        cvReleaseImage( &frame );
        if (frame == 0 )
          frame = cvCreateImage ( cvSize(inic_width, inic_height), img -> depth, img -> nChannels);
        cvResize(img, frame);
        #else
        frame = cvQueryFrame( capture );
        #endif
        //Size of Image capture
        frame_width = frame -> width;
        frame_height = frame -> height;
       
        //Window Name
        cvNamedWindow( "Live Video" , 0);
        cvResizeWindow( "Live Video" , inic_width, inic_height);
        //Calback for mouse click
        cvSetMouseCallback( "Live Video", MouseWrapper, this);
        cvInitFont(&font, CV_FONT_HERSHEY_SIMPLEX, 0.5, 0.5, 0, 1.5, CV_AA);
        
        while (!stopping())
        {
          #ifdef __arm__
          img = raspiCamCvQueryFrame(capture);
          cvReleaseImage( &frame );
          if (frame == 0 )
            frame = cvCreateImage ( cvSize(inic_width, inic_height), img -> depth, img -> nChannels);
          cvResize(img, frame);
          #else
          frame = cvQueryFrame( capture );
          #endif
          
          if ( !capture )
          {
            inf("\n\tERROR GRAB IMAGE\n");
          }
                   
          TrackColor();
          
          //Add information in frame result
          time_acquisition();
          sprintf(text,"Hour: %d:%d:%d",hour,min,sec);
          cvPutText(frame, text, cvPoint(10, 20), &font, cvScalar(70, 70, 70, 0));
          sprintf(text,"Data: %d/%d/%d",day,mon,year);
          cvPutText(frame, text, cvPoint(10, 42), &font, cvScalar(70, 70, 70, 0));
          sprintf(text,"Menu - key 'm'");
          cvPutText(frame, text, cvPoint(10, 64), &font, cvScalar(150, 240, 150, 0));
          text[0]='\0';
         
          //Save video
          if ( flag_start )
          {
            save_video( frame, 1);
            cvCircle(frame, cvPoint( frame_width - 20, 20 ), 4, cvScalar( 0, 0, 255, 0 ), 5, 8, 0);
            sprintf(text,"REC");
            cvPutText(frame, text, cvPoint(frame_width - 60, 25), &font, cvScalar( 0, 0, 255, 0 ));
            text[0]='\0';
            
          }
          else
          {
            save_video( frame, 0);
            cvCircle(frame, cvPoint( frame_width - 20, 20 ), 4, cvScalar( 0, 255, 0, 0 ), 5, 8, 0);
          }
          
          //Showm Image - Result
          cvShowImage( "Live Video", frame);
         
          if ( flag_options )
          {
            cvShowImage("Threshold", threshold_img);
            cvCreateTrackbar("Low Red value", "Threshold", &m_args.ilow_r, 255, 0);
            cvCreateTrackbar("High Red value", "Threshold", &m_args.ihigh_r, 255, 0);
            cvCreateTrackbar("Low Green value", "Threshold", &m_args.ilow_g, 255, 0);
            cvCreateTrackbar("High Green value", "Threshold", &m_args.ihigh_g, 255, 0);
            cvCreateTrackbar("Low Blue value", "Threshold", &m_args.ilow_b, 255, 0);
            cvCreateTrackbar("High Blue value", "Threshold", &m_args.ihigh_b, 255, 0);
            cvCreateTrackbar("Min area", "Threshold", &m_args.min_area, 6000, 0);
            cvCreateTrackbar("Max area", "Threshold", &m_args.max_area, 6000, 0);
          }
          else if ( !flag_options && key == 'm' )
          {
            cvDestroyWindow( "Threshold" );
            key = 'l';
          }
          
          CheckNewValues();
                   
          key = cvWaitKey(1000/24);
          // Save Snapshot
          if ( key == 's' || key == 'S')
            save_image( frame );
          // Start/Stop record of video
          if ( key == 'r' || key == 'R')
            flag_start = !flag_start;
          // Show/hide Menu parameters
          if ( key == 'm' || key == 'M')
            flag_options = !flag_options;
        }
        cvDestroyWindow( "Live Video" );
        #ifdef __arm__
        raspiCamCvReleaseCapture( &capture );
        #else
        cvReleaseCapture(&capture);
        #endif
        
      }
    };
  }
}

DUNE_TASK