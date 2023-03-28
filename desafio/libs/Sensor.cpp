#include "Sensor.h"

Sensor::Sensor(const std::string &name,
               const std::string &manufacturerName,
               bool isSensor):
                Device(name,manufacturerName),
                isSensor_(isSensor){}

// Setter Member Functions
void Sensor::setSensor(bool isSensor) {
    isSensor = isSensor;
}

// Getter Member Functions
bool Sensor::getSensorInfo()const {
    return isSensor_;
}
