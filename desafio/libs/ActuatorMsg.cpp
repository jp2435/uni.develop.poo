#include "ActuatorMsg.h"
ActuatorMsg::ActuatorMsg(unsigned int source,
                         unsigned int destination,
                         const std::string &info):
                            Message(source,destination),
                            info_(info){}

// Setter Member Functions
void ActuatorMsg::setInfo(const std::string &info) {
    info_ = info;
}

// Getter Member Functions
const std::string &ActuatorMsg::getInfo() const {
    return info_;
}

std::ostream &operator <<(std::ostream &os, const ActuatorMsg &Msg){
    os  << "ActMsg ID:" << Msg.id_
        << " Source:" << Msg.source_
        << " destination:" << Msg.destination_
        << " info:" << Msg.info_;
    return os;
}
