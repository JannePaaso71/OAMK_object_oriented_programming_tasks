
#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H

#include "devicebaseclass.h"


class DeviceTouchPad : public DeviceBaseClass
{
public:
    DeviceTouchPad();
    void setTouchPadSensitivy();
    short getTouchPadSensitivy();

private:
    short touchPadSensitivity;
};

#endif // DEVICETOUCHPAD_H
