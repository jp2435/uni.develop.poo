#include "SensorMsg.h"
SensorMsg::SensorMsg(unsigned int source,
                     unsigned int destination,
                     const std::string &type,
                     float value):
        Message(source,destination),
        type_(type),
        value_(value){};


// Setter Member Functiosn
void SensorMsg::setType(const std::string &type) {
    type_ = type;
}

void SensorMsg::setValue(float value) {
    value_ = value;
}

// Getter Member Functions
const std::string &SensorMsg::getType() const {
    return type_;
}
float SensorMsg::getValue() const {
    return value_;
}

std::ostream &operator <<(std::ostream &os, const SensorMsg &Msg){
    os  << "SenMsg ID:" << Msg.id_
        << " Source:" << Msg.source_
        << " destination:" << Msg.destination_
        << " type:" << Msg.type_
        << " value:" << Msg.value_ << std::endl;
    return os;
}