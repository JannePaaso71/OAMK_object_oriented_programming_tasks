
#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{

}

void DeviceTouchPad::setTouchPadSensitivy()
{
    cout<<"Set Touch Pad Sensitivy: \n";
    cin>>touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivy()
{
    return touchPadSensitivity;
}

