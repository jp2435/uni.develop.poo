#include "Ship.h"

int Ship::UUID() {
    static int ID = 0;
    ID += 1;
    return ID;
}
void Ship::SetUUID() {
    ID_ = UUID();
}