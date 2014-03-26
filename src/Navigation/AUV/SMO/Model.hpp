//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Tiago Rodrigues                                                  *
//***************************************************************************

#ifndef NAVIGATION_AUV_SMO_MODEL_H
#define NAVIGATION_AUV_SMO_MODEL_H

#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace AUV
  {
    namespace SMO
    {
      using DUNE_NAMESPACES;

      class Model
      {
      public:

        /****************************************AUV MODEL MATRICES****************************************/

        static Matrix
        computeM_RB1(float m,float zG,float Ixx,float Iyy,float Izz)
        {
          //Inertia Matrix
          double MRB_vector[36]={m,    0,     0, 0,     m*zG, 0,
                                 0,    m,     0, -m*zG, 0,    0,
                                 0,    0,     m, 0,     0,    0,
                                 0,    -m*zG, 0, Ixx,   0,    0,
                                 m*zG, 0,     0, 0,     Iyy,  0,
                                 0,    0,     0, 0,     0,    Izz};

          return ( Matrix(MRB_vector, 6, 6) );
        }


        static Matrix
        computeM_A1(float Xdudt,float Ydvdt,float Zdwdt,float Kdpdt,float Mdqdt,float Ndrdt)
        {
          //Inertia Matrix
          double MA_vector[6]={-Xdudt, -Ydvdt, -Zdwdt, -Kdpdt, -Mdqdt, -Ndrdt};

          return ( Matrix(MA_vector, 6) );
        }

        static Matrix
        computeC_RB1(float m,float xg,float yg,float zG,float Ixx,float Iyy,float Izz,float Ixz,float Ixy,float Iyz,double v_estimado[6])
        {
          // Coriolis Matrix

          double u = v_estimado[0];
          double v = v_estimado[1];
          double w = v_estimado[2];
          double p = v_estimado[3];
          double q = v_estimado[4];
          double r = v_estimado[5];

          double CRB_vector[36]={0,              0,              0,              m*(yg*q+zG*r),      -m*(xg*q-w),       -m*(xg*r+v),
                                 0,              0,              0,              -m*(yg*p+w),        m*(zG*r+xg*p),     -m*(yg*r-u),
                                 0,              0,              0,              -m*(zG*p-v),        -m*(zG*q+u),       m*(xg*p+yg*q),
                                 -m*(yg*q+zG*r), m*(yg*p+w),     m*(zG*p-v),     0,                  Iyz*q-Ixz*p+Izz*r, Iyz*r+Ixy*p-Iyy*q,
                                 m*(xg*q-w),     -m*(zG*r+xg*p), m*(zG*q+u),     Iyz*q+Ixz*p-Izz*r,  0,                 -Ixz*r-Ixy*q+Ixx*p,
                                 m*(xg*r+v),     m*(yg*r-u),     -m*(xg*p+yg*q), -Iyz*r-Ixy*p+Iyy*q, Ixz*r+Ixy*q-Ixx*p, 0};


          return (Matrix(CRB_vector, 6, 6) );
        }

        static Matrix
        computeC_A1(float Xdudt,float Ydvdt,float Zdwdt,float Kdpdt,float Mdqdt,float Ndrdt,double v_estimado[6])
        {
          // Coriolis Matrix

          double ur = v_estimado[0];
          double vr = v_estimado[1];
          double wr = v_estimado[2];
          double pr = v_estimado[3];
          double qr = v_estimado[4];
          double rr = v_estimado[5];

          double CA_vector[36]={0,         0,         0,         0,         Zdwdt*wr,  Ydvdt*vr,
                                0,         0,         0,         Zdwdt*wr,  0,         -Xdudt*ur,
                                0,         0,         0,         -Ydvdt*vr, Xdudt*ur,  0,
                                0,         -Zdwdt*wr, Ydvdt*vr,  0,         -Ndrdt*rr, Mdqdt*qr,
                                Zdwdt*wr,  0,         -Xdudt*ur, Ndrdt*rr,  0,         -Kdpdt*pr,
                                -Ydvdt*vr, Xdudt*ur,  0,         -Mdqdt*qr, Kdpdt*pr,  0};

          return (Matrix(CA_vector, 6, 6) );
        }


        static Matrix
        computeD1(double v_estimado[6], float X_u, float Y_v, float Y_r, float Z_w, float Z_q, float K_p, float M_q, float M_w, float N_r, float N_v, float X_uabsu, float Y_vabsv, float Y_rabsr, float Z_wabsw, float Z_qabsq, float K_pabsp, float M_qabsq, float M_wabsw, float N_rabsr, float N_vabsv)
        {
          // Damping Matrix

          double ur = v_estimado[0];
          double vr = v_estimado[1];
          double wr = v_estimado[2];
          double pr = v_estimado[3];
          double qr = v_estimado[4];
          double rr = v_estimado[5];

          double D1_vector[36]={X_u, 0,   0,    0,   0,   0,
                                0,   Y_v, 0,    0,   0,   Y_r,
                                0,   0,   Z_w,  0,   Z_q, 0,
                                0,   0,   0,    K_p, 0,   0,
                                0,   0,   M_w,  0,   M_q, 0,
                                0,   N_v, 0,    0,   0,   N_r};

          double D2_vector[36]={X_uabsu *std::abs(ur), 0,                    0,                    0,                    0,                    0,
                                0,                     Y_vabsv*std::abs(vr), 0,                    0,                    0,                    Y_rabsr*std::abs(rr),
                                0,                     0,                    Z_wabsw*std::abs(wr), 0,                    Z_qabsq*std::abs(qr), 0,
                                0,                     0,                    0,                    K_pabsp*std::abs(pr), 0,                    0,
                                0,                     0,                    M_wabsw*std::abs(wr), 0,                    M_qabsq*std::abs(qr), 0,
                                0,                     N_vabsv*std::abs(vr), 0,                    0,                    0,                    N_rabsr*std::abs(rr)};


          return (-Matrix(D1_vector, 6, 6) - Matrix(D2_vector, 6, 6) );
        }


        static Matrix
        computeL1(double v_estimado[6])
        {
          // Lift Matrix

          double ur = v_estimado[0];

          double L_vector[36]={0, 0,       0,      0, 0,       0,
                               0, 30*ur,   0,      0, 0,      -7.7*ur,
                               0, 0,       30*ur,  0, 7.7*ur, 0,
                               0, 0,       0,      0, 0,      0,
                               0, 0,       9.9*ur, 0, 3.1*ur, 0,
                               0, -9.9*ur, 0,      0, 0,      3.1*ur};

          return (Matrix(L_vector, 6, 6) );

        }


        static Matrix
        computeG1(float W,float B,float zG,double pos_estimado[6])
        {
          // Restoring forces Matrix

          double phi = Angles::normalizeRadian(pos_estimado[3]);
          double theta = Angles::normalizeRadian(pos_estimado[4]);
          //double psi = Angles::normalizeRadian(pos_estimado[5]);

          // Pass euler angles to row matrix
          Matrix G(6,1);
          G(0) = (W-B)*sin(theta);
          G(1) = -(W-B)*cos(theta)*sin(phi);
          G(2) = -(W-B)*cos(theta)*cos(phi);
          G(3) = zG*W*cos(theta)*sin(phi);
          G(4) = zG*W*sin(theta);
          G(5) = 0;

          return G;

        }


        static Matrix
        computeTau1(double thruster,double velocities[6],double servo_pos[3])
        {
         /* Matrix tau_tmp(6, 1, 0.0);
          Matrix deflections(3, 1, 0.0);
          Matrix m_fin_lift(5,1);
          double m_motor_friction = 0.06;
          double fincoef[5] = {9.6, -9.6, 1.82, -3.84, -3.84};
          m_fin_lift= Matrix(fincoef, 5, 1);


          deflections(0) = servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2];
          deflections(1) = servo_pos[1] + servo_pos[2];
          deflections(2) = servo_pos[0] + servo_pos[3];

          tau_tmp(0) = thruster * 10; // Times 10 to compute thruster force between -10 and 10
          tau_tmp(1) = m_fin_lift(0) * velocities[0] * velocities[0] * deflections(2);
          tau_tmp(2) = m_fin_lift(1) * velocities[0] * velocities[0] * deflections(1);
          tau_tmp(3) = m_fin_lift(2) * velocities[0] * velocities[0] * deflections(0) + m_motor_friction * tau_tmp(0);
          tau_tmp(4) = m_fin_lift(3) * velocities[0] * velocities[0] * deflections(1);
          tau_tmp(5) = m_fin_lift(4) * velocities[0] * velocities[0] * deflections(2);*/

          Matrix tau_tmp(6, 1, 0.0);
          tau_tmp(0,0) = thruster * 10/0.8;//thruster * 10;
          tau_tmp(1,0) = (servo_pos[1] * 9.6 + servo_pos[2] * 9.6) * pow(velocities[0],2.0);
          tau_tmp(2,0) = (servo_pos[0] * -9.6 + servo_pos[3] * -9.6) * pow(velocities[0],2.0);
          tau_tmp(3,0) = (servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * -0.4 * pow(velocities[0],2.0) + 0.006 * tau_tmp(0,0);
          tau_tmp(4,0) = (servo_pos[0] * -3.85 + servo_pos[3] * -3.85 ) * pow(velocities[0],2.0);
          tau_tmp(5,0) = (servo_pos[1] * -3.85 + servo_pos[2] * -3.85 ) * pow(velocities[0],2.0);


          return tau_tmp;
        }

        /**************************************************************************************************/


        /*static Matrix
        compute_filtering(Matrix v, Matrix v_bar, double delta_t)
        {

          Matrix T = Matrix(6,6, 0.0);
          T(0,0) = 1*delta_t;
          T(1,1) = 1*delta_t;
          T(2,2) = 1*delta_t;
          T(3,3) = 1*delta_t;
          T(4,4) = 1*delta_t;
          T(5,5) = 1*delta_t;

          /*Matrix v = Matrix(6,1, 0.0);
          v(0, 0) = velocities[0];
          v(1, 0) = velocities[1];
          v(2, 0) = velocities[2];
          v(3, 0) = velocities[3];
          v(4, 0) = velocities[4];
          v(5, 0) = velocities[5];*/

          /*Matrix acc = Matrix(6,1, 0.0);
          acc = inverse(T) * 0.05 * ( v - v_bar);

          return acc;
        }*/

      };
    }
  }
}
#endif