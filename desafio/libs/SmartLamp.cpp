#include "SmartLamp.h"
SmartLamp::SmartLamp(
        const std::string &name,
        const std::string &manufacturerName,
        bool isOn):
        Actuator(name,manufacturerName),
            isOn_(isOn){}


// Setter Member Functions
void SmartLamp::setIsOn(bool isOn) {
    isOn_ = isOn;
}

// Getter Member Functions
bool SmartLamp::isOn() const {
    return isOn_;
}


std::ostream &operator <<(std::ostream &os,const SmartLamp &Lamp){
    os  << "SmartLamp ID:" << Lamp.identification_
        << " Name:" << Lamp.name_
        << " Status:" << (Lamp.isOn_? "on": "off")  << std::endl;
    return os;
}


