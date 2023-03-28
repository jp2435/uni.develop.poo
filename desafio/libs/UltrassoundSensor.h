#ifndef ULTRASSOUNDSENSOR_H
#define ULTRASSOUNDSENSOR_H
#include "./Sensor.h"

class UltrassoundSensor: public Sensor{
private:
    float ultrassoundDistance_;
public:
    UltrassoundSensor() = default;
    UltrassoundSensor(const std::string &name,const std::string &manufacturerName, float value);

    // Setter Member Functions
    void setDistance(float distance);
    // Getter Member Functions
    float getDistance() const;

    // Overload operator's
    friend std::ostream &operator <<(std::ostream &os,const UltrassoundSensor &Sensor);
};


#endif
