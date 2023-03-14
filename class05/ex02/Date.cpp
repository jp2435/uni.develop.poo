#include "Date.h"

Date::~Date(){

}

// Getter Member Functions
unsigned int Date::getDay() const{
    return day_;
}
unsigned int Date::getMonth() const {
    return month_;
}
unsigned int Date::getYear() const{
    return year_;
}


std::ostream &operator<<(std::ostream &os, Date &t){

return os << t.day_ << "/" << t.month_ << "/" << t.year_;
}