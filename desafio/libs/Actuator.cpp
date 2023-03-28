#include "Actuator.h"

Actuator::Actuator(const std::string &name, const std::string &manufacturerName, bool isActuator):
    Device(name,manufacturerName), isActuator_(isActuator){};

// Setter Member Functions
void Actuator::setIsActuator(bool isActuator) {
    isActuator_ = isActuator;
}

// Getter Member Functions
bool Actuator::isActuator() const {
    return isActuator_;
}