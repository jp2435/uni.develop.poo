#ifndef ACTUATOR_H
#define ACTUATOR_H
#include "./Device.h"

class Actuator: public Device {
protected:
    bool isActuator_=true;
public:
    Actuator() = default;
    Actuator(const std::string &name,const std::string &manufacturerName, bool isActuator=true);

    // Setter Member Functions
    void setIsActuator(bool isActuator);

    // Getter Member Functions
    bool isActuator() const;
};


#endif