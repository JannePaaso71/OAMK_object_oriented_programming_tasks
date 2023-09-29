
#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{

}

void DeviceMouse::setPrimaryButton()
{
    cout<<"Set Mouse Primary button: \n";
    cin>>primaryButton;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}

