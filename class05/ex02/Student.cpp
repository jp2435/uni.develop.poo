#include "Student.h"

unsigned int Student::UUID() {
    static unsigned int ID = 999;
    ID += 1;
    return ID;
}

// Setter Member Functions

// Getter Member Functions
unsigned int Student::getNmec() const{
    return Nmec_;
}