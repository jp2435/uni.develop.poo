#include "LuminanceSensor.h"
LuminanceSensor::LuminanceSensor(const std::string &name,
                                 const std::string &manufacturerName,
                                 float value):
                                    Sensor(name,manufacturerName),
                                    luxValue_(value){}
// Setter Member Functions
void LuminanceSensor::setLux(float luxValue) {
    luxValue_ = luxValue;
}

// Getter Member Functions
float LuminanceSensor::getLux() const {
    return luxValue_;
}

std::ostream &operator <<(std::ostream &os,const LuminanceSensor &Sensor){
    os  << "Luminance Sensor ID:" << Sensor.identification_
        << " Name:" << Sensor.name_
        << " Value:" << Sensor.luxValue_ << " lux\n";
    return os;
}
std::istream &operator >>(std::istream &input,LuminanceSensor &Sensor){

    std::cout << "Device name?";
    input >> Sensor.name_;
    std::cout << "Manufacturer name?";
    input >> Sensor.manufacturer_name_;
    std::cout << "Luminance value?";
    input >> Sensor.luxValue_;
    return input;
}