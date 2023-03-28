#include "Message.h"
Message::Message(unsigned int source, unsigned int destination_):
    source_(source), destination_(destination_), id_(UUID()){}


unsigned int Message::UUID() {
    static unsigned int id = 99;
    id += 1;
    return id;
}

// Setter Member Functions
void Message::setSource(unsigned int source) {
    source_ = source;
}
void Message::setDestination(unsigned int destination) {
    destination_ = destination;
}

// Getter Member Funtions
unsigned int Message::getSource() const {
    return source_;
}
unsigned int Message::getDestination() const {
    return destination_;
}