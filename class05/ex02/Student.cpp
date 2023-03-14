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
const Date &Student::getEnrollmentDate() const {
    return enrollment_date_;
}

const Date &Student::CurrentTime(){
    time_t now = time(nullptr);
    tm *ltm = localtime(&now);

    return Date(ltm->tm_mday,ltm->tm_mon,ltm->tm_year);
}