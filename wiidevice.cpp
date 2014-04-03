#include "wiidevice.h"

WiiDevice::WiiDevice()
{
    setRumble(false);
}

void WiiDevice::setAcc(char oName, int val)
{
    _device.acc[oName] = val;
}

void WiiDevice::setIR(char oName, int val, int n)
{
    _device.ir[n][oName] = val;
}

void WiiDevice::setKey(const char * key, bool val)
{
    _device.key[key] = val;
}

void WiiDevice::setMP(char oName, int32_t val)
{
    _device.mp[oName] =  val;
}

void WiiDevice::setRumble(bool val)
{
    _device.rumble = val;
}

void WiiDevice::setLedState(int n, bool val)
{
    if (n < 4 && n >= 0)
    _device.led[n] = val;
}

void WiiDevice::setBattery(uint16_t val)
{
    _device.battery = val;
}

void WiiDevice::setHasMP(bool val)
{
    _device.hasmp = val;
}

bool WiiDevice::getLedState(int no)
{
    if (no < 4 && no >= 0) return _device.led[no];
    else return false;
}

int WiiDevice::getAcc(char oName)
{
    return _device.acc[oName];
}

int WiiDevice::getIR(char oName, int which)
{
    return _device.ir[which][oName];
}

bool WiiDevice::getKey(const char * key)
{
    return _device.key[key];
}

int32_t WiiDevice::getMP(char oName)
{
    return _device.mp[oName];
}

bool WiiDevice::getRumble()
{
    return _device.rumble;
}

uint16_t WiiDevice::getBattery()
{
    return _device.battery;
}

bool WiiDevice::getHasMP()
{
    return _device.hasmp;
}

struct device WiiDevice::getDeviceState()
{
    return _device;
}

void WiiDevice::setDeviceState(struct device dev)
{
    _device = dev;
}
