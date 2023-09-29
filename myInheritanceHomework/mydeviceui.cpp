
#include "mydeviceui.h"
#include <iostream>
using namespace std;


MyDeviceUI::MyDeviceUI()
{
    p_DeviceMouse = new DeviceMouse;
    p_DeviceTouchPad = new DeviceTouchPad;
    p_DeviceDisplay = new DeviceDisplay;
}

MyDeviceUI::~MyDeviceUI()
{
    delete p_DeviceMouse;
    p_DeviceMouse = nullptr;
    delete p_DeviceDisplay;
    p_DeviceDisplay = nullptr;
    delete p_DeviceTouchPad;
    p_DeviceTouchPad = nullptr;
}

void MyDeviceUI::uiShowMenu()
{
    while (true){
        int choose{0};
        cout<<"DEVICE MENU\n";
        cout<<"===========\n";
        cout<<"1: Set Mouse Information\n";
        cout<<"2: Set Touch Pad Information\n";
        cout<<"3: Set Display Information\n";
        cout<<"4: Show Display Information\n";
        cout<<"5: Finish\n";
        cout<<"\n";
        cout<<"Choose:";
        cin>>choose;
        if(choose == 1){
            MyDeviceUI::uiSetMouseInformation();
        }
        if(choose == 2){
            MyDeviceUI::uiSetTouchPadInformation();
        }
        if(choose == 3){
            MyDeviceUI::uiSetDisplayInformation();
        }
        if(choose == 4){
            MyDeviceUI::uiShowDeviceInformation();
        }
        if(choose == 5){
            break;
        }
    }
}

void MyDeviceUI::uiSetMouseInformation()
{
    cout<<"\n";
    cout<<"SET MOUSE INFORMATION\n";
    cout<<"=====================\n";
    cout<<"Set Mouse Device ID: \n";
    p_DeviceMouse->setDeviceID();
    p_DeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout<<"SET TOUCH PAD INFORMATION\n";
    cout<<"=====================\n";
    cout<<"Set Touch Pad Device ID: \n";
    p_DeviceTouchPad->setDeviceID();
    p_DeviceTouchPad->setTouchPadSensitivy();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout<<"SET DISPLAY INFORMATION\n";
    cout<<"=====================\n";
    cout<<"Set Display Device ID: \n";
    p_DeviceDisplay->setDeviceID();
    p_DeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout<<"Mouse information:\n";
    cout<<"Devise ID: "<<p_DeviceMouse->getDeviceID()<<endl;
    cout<<"Primary Button: "<<p_DeviceMouse->getPrimaryButton()<<endl;
    cout<<"Touch Pad information:\n";
    cout<<"Device ID: "<<p_DeviceTouchPad->getDeviceID()<<endl;
    cout<<"Touch Pad Sensitivy: "<<p_DeviceTouchPad->getTouchPadSensitivy()<<endl;
    cout<<"Display information:\n";
    cout<<"Device ID: "<<p_DeviceDisplay->getDeviceID()<<endl;
    cout<<"Display Resolution: "<<p_DeviceDisplay->getDisplayResolution()<<endl;
}

