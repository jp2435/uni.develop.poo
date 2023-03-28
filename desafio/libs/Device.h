#ifndef DEVICE_H
#define DEVICE_H
#include <iostream>

class Device {
protected:
    unsigned int identification_;
    std::string name_;
    std::string manufacturer_name_;

    static unsigned int UUID();
public:
    Device(): identification_(UUID()){};
    Device(const std::string &name,const std::string &manufacturerName);

    // Setter Member Functions
    void setName(std::string& name);
    void setManufacturerName(std::string& manufacturerName);
    // Getter Member Functions
    const std::string &getName() const;
    const std::string &getManufacterName() const;
    unsigned int getId() const;
};


#endif
