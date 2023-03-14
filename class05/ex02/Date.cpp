#include "Date.h"

Date::~Date(){

}
// Setter Member Functions
void Date::setDay(unsigned int d){
    day_ = d;
}
void Date::setMonth(unsigned int m){
    month_ = m;
}
void Date::setYear(unsigned int y){
    year_ = y;
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