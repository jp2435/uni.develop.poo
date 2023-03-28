#ifndef ACTUATORMSG_H
#define ACTUATORMSG_H
#include "./Message.h"

class ActuatorMsg: public Message{
private:
    std::string info_;
public:
    ActuatorMsg() = default;
    ActuatorMsg(unsigned int source,unsigned int destination,const std::string &info);

    // Setter Member Functions
    void setInfo(const std::string &info);

    // Getter Member Functions
    const std::string &getInfo() const;

    friend std::ostream &operator <<(std::ostream &os,const ActuatorMsg &Msg);
};


#endif
