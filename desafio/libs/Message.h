#ifndef MESSAGE_H
#define MESSAGE_H
#include <iostream>

class Message {
protected:
    unsigned int id_;
    unsigned int source_;
    unsigned int destination_;
    static unsigned int UUID();
public:
    Message(): id_(UUID()){};
    Message(unsigned int source,unsigned int destination_);

    // Setter Member Functions
    void setSource(unsigned int source);
    void setDestination(unsigned int destination);

    // Getter Member Funtions
    unsigned int getSource() const;
    unsigned int getDestination() const;
};


#endif
