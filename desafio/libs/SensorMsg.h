#ifndef SENSORMSG_H
#define SENSORMSG_H
#include "./Message.h"

class SensorMsg: public Message{
private:
    std::string type_;
    float value_;
public:
    SensorMsg() = default;
    SensorMsg(unsigned int source,unsigned int destination,const std::string &type, float value);

    // Setter Member Functions
    void setType(const std::string &type);
    void setValue(float value);

    // Getter Member Functions
    const std::string &getType() const;
    float getValue() const;

    // Overload operator's
    friend std::ostream &operator <<(std::ostream &os,const SensorMsg &Msg);
};


#endif
