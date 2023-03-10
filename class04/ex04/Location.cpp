#include "Location.h"

// Setter Member Functions
void Location::setLatitude(const float& latitude){
    this->latitude_ = latitude;
}
void Location::setLongitude(const float& longitude){
    this->longitude_ = longitude;
}

// Getter Member Functions
float Location::getLatitude() const{
    return latitude_;
}
float Location::getLongitude() const{
    return longitude_;
}