#include "Person.h"

// Setter Member Functions

// Getter Member Functions
std::string Person::getName() const{
    return name_;
}
unsigned int Person::getCc() const {
    return cc_;
}
const Date &Person::getBirthDate() const {
    return birth_date_;
}