#ifndef SMARTLAMP_H
#define SMARTLAMP_H
#include "./Actuator.h"

class SmartLamp: public Actuator{
private:
    bool isOn_;
public:
    SmartLamp() = default;
    SmartLamp(const std::string &name, const std::string &manufacturerName, bool isOn);

    // Setter Member Functions
    void setIsOn(bool isOn);

    // Getter Member Functions
    bool isOn() const;

    // Overload operator's
    friend std::ostream &operator <<(std::ostream &os, const SmartLamp &Lamp);
};


#endif