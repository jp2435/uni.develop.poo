#include "UltrassoundSensor.h"
UltrassoundSensor::UltrassoundSensor(const std::string &name,
                                     const std::string &manufacturerName,
                                     float value):
                                        Sensor(name,manufacturerName),
                                        ultrassoundDistance_(value){};

// Setter Member Functions
void UltrassoundSensor::setDistance(float distance) {
    ultrassoundDistance_ = distance;
}
// Getter Member Functions
float UltrassoundSensor::getDistance() const {
    return ultrassoundDistance_;
}

std::ostream &operator <<(std::ostream &os, const UltrassoundSensor &Sensor){
    os  << "Ultra Sensor Sensor ID:" << Sensor.identification_
        << " Name:" << Sensor.name_
        << " Value:" << Sensor.ultrassoundDistance_ << " m\n";
    return os;
}