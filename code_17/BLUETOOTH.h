/*

    GitHub: https://github.com/matheusjohannaraujo/lego_nxt_com_bricxcc_nxc
    Country: Brasil
    State: Pernambuco
    Developer: Matheus Johann Araújo
    Date: 2019-06-07
    Library: Biblioteca bluetooth para comunicação entre duas controladoras NXT ou NXT e outro dispositivo com bluetooth. 
    Obs.: Conectar primeiramente o NXT Master no Slave, ambos na porta de número 1. Nunca o contrário, pois irá da erro na conexão.

*/

#ifndef __BLUETOOTH_H__
#define __BLUETOOTH_H__

bool bluetoothConnected(char c);
string bluetoothSlaveGet();
bool bluetoothSlaveSet(string text);
bool bluetoothMasterSet(string text);

#endif

bool bluetoothConnected(char c){
    int numberConn = -1;
    if(c == 'M'){
        numberConn = 0;
    }else if(c == 'S'){
        numberConn = 1;
    }
    bool isConn = (BluetoothStatus(numberConn) == NO_ERR) ? true : false;
    if(isConn){
        TextOut(0, LCD_LINE1, "Bluetooth Ok");
    }else{
        TextOut(0, LCD_LINE1, "Bluetooth Error");
    }
    Wait(2000);
    ClearScreen();
    return isConn;
}

string bluetoothSlaveGet(){
    string in;
    ReceiveRemoteString(1, true, in);
    return in;
}

bool bluetoothSlaveSet(string text){
    return SendResponseString(1, text) ? true : false;
}

bool bluetoothMasterSet(string text){
    return SendRemoteString(1, 1, text) ? true : false;
}