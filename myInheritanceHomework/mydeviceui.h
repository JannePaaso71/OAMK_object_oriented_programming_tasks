
#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H

#include "devicemouse.h"
#include "devicetouchpad.h"
#include "devicedisplay.h"
//using namespace std;

class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();

private:
    DeviceMouse * p_DeviceMouse;
    DeviceTouchPad * p_DeviceTouchPad;
    DeviceDisplay * p_DeviceDisplay;

};

#endif // MYDEVICEUI_H
