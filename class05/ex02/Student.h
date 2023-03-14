#ifndef STUDENT_H_EX02
#define STUDENT_H_EX02

#include <ctime>
#include "./Person.h"

class Student: public Person {
private:
    unsigned int Nmec_;
    Date enrollment_date_;
    static unsigned int UUID();
    static Date CurrentTime();
public:
    Student(const std::string &name, unsigned int cc,const Date &birth,const Date &enrollment=CurrentTime()) :
        Person(name, cc, birth), enrollment_date_(enrollment) {
            Nmec_ = UUID();
    }
    // Setter Member Functions

    // Getter Member Functions
    unsigned int getNmec() const;
    const Date &getEnrollmentDate() const;
};


#endif
