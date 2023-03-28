#include "Device.h"
Device::Device(const std::string &name, const std::string &manufacturerName):
        name_(name),
        manufacturer_name_(manufacturerName),
        identification_(UUID()){};

unsigned int Device::UUID() {
    static int id = 9;
    id += 1;
    return id;
}

// Setter Member Functions
void Device::setName(std::string &name) {
    name_ = name;
}
void Device::setManufacturerName(std::string &manufacturerName) {
    manufacturer_name_ = manufacturerName;
}

// Getter Member Functions
const std::string &Device::getName() const {
    return name_;
}
const std::string &Device::getManufacterName() const {
    return manufacturer_name_;
}
unsigned int Device::getId() const {
    return identification_;
}