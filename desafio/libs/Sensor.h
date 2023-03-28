#ifndef SENSOR_H
#define SENSOR_H
#include "./Device.h"

class Sensor: public Device {
protected:
    bool isSensor_=true;
public:
    Sensor() = default;;
    Sensor(const std::string &name,const std::string &manufacturerName, bool isSensor=true);

    // Setter Member Functions
    void setSensor(bool isSensor);

    // Getter Member Functions
    bool getSensorInfo() const;

};


#endif
