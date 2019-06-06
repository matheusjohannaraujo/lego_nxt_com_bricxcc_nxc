/*

     GitHub: https://github.com/matheusjohannaraujo/lego_nxt_com_bricxcc_nxc
     Country: Brasil
     State: Pernambuco
     Developer: Matheus Johann Araújo
     Date: 2019-06-06
     Library: Biblioteca feita com base na biblioteca (HTSMUX-driver), com o intuito de simplificar o uso do "HiTechnic Sensor Multiplexer" no LEGO NXT com a linguagem NXC.
     References: 
                    https://github.com/RoboTec/BlackLine/blob/master/HTSMUX-driver.h
                    https://mindboards.org/viewtopic.php?f=2&t=1677

*/

#include "HTSMUX-driver.h"

#ifndef __SMUX_H__
#define __SMUX_H__

typedef struct{
    int cn;
    int r;
    int g;
    int b;
} RGB;

typedef struct{
    int x;
    int y;
    int z;
} XYZ;

int SMUX_Port(int i);
int SMUX_Sensor_Port(int i, int j);
bool SMUX_Define(int i);
bool SMUX_Sensor_Touch(int i, int j);
int SMUX_Sensor_HTCompass(int i, int j);
RGB SMUX_Sensor_HTColor(int i, int j);
XYZ SMUX_Sensor_HTAccel(int i, int j);
int SMUX_Sensor_Light(int i, int j, int state, bool raw);
int SMUX_Sensor_Ultrasonic(int i, int j);
int SMUX_Sensor_Sound(int i, int j, bool state);

#endif

int SMUX_Port(int i){
    switch(i){
          case 1:
               return S1;
          case 2:
               return S2;
          case 3:
               return S3;
          case 4:
               return S4;
          default:
               return S1;
    }
}

int SMUX_Sensor_Port(int i, int j){
     switch(i){
          case 1:
               switch(j){
                    case 1:
                         return msensor_S1_1;
                    case 2:
                         return msensor_S1_2;
                    case 3:
                         return msensor_S1_3;
                    case 4:
                         return msensor_S1_4;
               }
          case 2:
               switch(j){
                    case 1:
                         return msensor_S2_1;
                    case 2:
                         return msensor_S2_2;
                    case 3:
                         return msensor_S2_3;
                    case 4:
                         return msensor_S2_4;
               }
          case 3:
               switch(j){
                    case 1:
                         return msensor_S3_1;
                    case 2:
                         return msensor_S3_2;
                    case 3:
                         return msensor_S3_3;
                    case 4:
                         return msensor_S3_4;
               }
          case 4:
               switch(j){
                    case 1:
                         return msensor_S4_1;
                    case 2:
                         return msensor_S4_2;
                    case 3:
                         return msensor_S4_3;
                    case 4:
                         return msensor_S4_4;
               }
          default:
               return msensor_S1_1;
     }
}

bool SMUX_Define(int i){
    bool sensor = false;
    SetSensor(SMUX_Port(i), SENSOR_LOWSPEED);
    if (!HTSMUXscanPorts(SMUX_Port(i))){
        TextOut(0, LCD_LINE1, "Scan failed!");
    }else{
        TextOut(0, LCD_LINE1, "Scan success!");
        sensor = true;
    }
    Wait(1500);
    ClearScreen();
    return sensor;
}

bool SMUX_Sensor_Touch(int i, int j){
     return smuxReadSensorLegoTouch(SMUX_Sensor_Port(i, j));
}

int SMUX_Sensor_HTCompass(int i, int j){
     return smuxSensorHTCompass(SMUX_Sensor_Port(i, j));
}

XYZ SMUX_Sensor_HTAccel(int i, int j){
     XYZ var;
     smuxReadSensorHTAccel(SMUX_Sensor_Port(i, j), var.x, var.y, var.z);
     return var;
}

RGB SMUX_Sensor_HTColor(int i, int j){
    RGB var;
    smuxReadSensorHTColor(SMUX_Sensor_Port(i, j), var.cn, var.r, var.g, var.b);
    return var;
}

int SMUX_Callback_Sensor_Luz(int i, int j, bool state, bool raw){
     smuxSetSensorLegoLight(SMUX_Sensor_Port(i, j), state);
     int sensor = smuxSensorLegoLightNorm(SMUX_Sensor_Port(i, j));
     if(raw){
         sensor = (1024 * sensor) / 100;
     }
     Wait(20);
     return sensor; 
}

int SMUX_Sensor_Light(int i, int j, int state, bool raw){
     if(state == 1){
          return SMUX_Callback_Sensor_Luz(i, j, false, raw);
     }else if(state == 2){
          return SMUX_Callback_Sensor_Luz(i, j, true, raw);
     }else if(state == 3){
          int s1 = SMUX_Callback_Sensor_Luz(i, j, false, raw);
          int s2 = SMUX_Callback_Sensor_Luz(i, j, true, raw);
          int s3 = SMUX_Callback_Sensor_Luz(i, j, false, raw);
          int s4 = SMUX_Callback_Sensor_Luz(i, j, true, raw);
          int s5 = SMUX_Callback_Sensor_Luz(i, j, false, raw);
          int s6 = SMUX_Callback_Sensor_Luz(i, j, true, raw);
          unsigned int sensor = (s6 + s5 + s4 + s3 + s2 + s1) / 6;
          //sensor = sensor - (s1/3);
          return sensor;
     }
     return -1; 
}

int SMUX_Sensor_Ultrasonic(int i, int j){
    return smuxSensorLegoUS(SMUX_Sensor_Port(i, j));
}

int SMUX_Sensor_Sound(int i, int j, bool state){
     if(state){
          return smuxSensorLegoSoundRaw(SMUX_Sensor_Port(i, j));
     }else{
          return smuxSensorLegoSoundNorm(SMUX_Sensor_Port(i, j));
     }
}
