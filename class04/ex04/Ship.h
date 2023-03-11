#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <string>
#include "Location.h"

class Ship {
private:
    unsigned int ID_;
    std::string name_;
    Location location_;
    static int UUID();
public:
    explicit Ship(std::string &name,float latitude=0,float longitude=0);

    // Setter Member Functions

    // Getter Member Functions
    unsigned int getID() const;
    std::string getName() const;
    void showInfo() const;

};


#endif
