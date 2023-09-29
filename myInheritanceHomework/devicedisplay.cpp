
#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay()
{

}

void DeviceDisplay::setDisplayResolution()
{
    cout<<"Set Dispaly Resolution: \n";
    cin>>displayResolution;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}

