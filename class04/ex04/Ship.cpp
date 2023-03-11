#include "Ship.h"

int Ship::UUID() {
    static int ID = 0;
    ID += 1;
    return ID;
}
Ship::Ship(std::string &name, float latitude, float longitude) {
    this->ID_ = UUID();
    this->name_ = name;
    this->location_.setLatitude(latitude);
    this->location_.setLongitude(longitude);
}

// Getter Member Functions
unsigned int Ship::getID() const{
    return this->ID_;
}
std::string Ship::getName() const{
    return this->name_;
}
void Ship::showInfo() const {
    std::cout << "\nName: " << this->name_ << std::endl
              << "Latitude: " << this->location_.getLatitude() << std::endl
              << "Longitude: " << this->location_.getLongitude() << std::endl;
}