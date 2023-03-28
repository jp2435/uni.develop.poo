#ifndef LUMINANCESENSOR_H
#define LUMINANCESENSOR_H
#include "./Sensor.h"


class LuminanceSensor: public Sensor {
private:
    float luxValue_;
public:
    LuminanceSensor() = default;
    LuminanceSensor(const std::string &name,const std::string &manufacturerName, float value);
    // Setter Member Functions
    void setLux(float luxValue);

    // Getter Member Functions
    float getLux() const;

    friend std::ostream  &operator << (std::ostream &os,const LuminanceSensor &Sensor);
    friend std::istream &operator >> (std::istream &input,LuminanceSensor &Sensor);
};


#endif
