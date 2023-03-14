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

Date Student::CurrentTime(){
    time_t now = time(nullptr);
    tm *ltm = localtime(&now);
    int day = ltm->tm_mday;
    int month = 1 + ltm->tm_mon;
    int year = 1900 + ltm->tm_year;

    return Date(day,month,year);
}