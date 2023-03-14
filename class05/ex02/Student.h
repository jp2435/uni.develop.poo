#ifndef CLASS05_STUDENT_H
#define CLASS05_STUDENT_H

#include "./Person.h"

class Student: public Person {
private:
    unsigned int Nmec_;
    static unsigned int UUID();
public:
    Student(std::string &name, unsigned int cc, Date &birth) :
        Person(name, cc, birth) {
            Nmec_ = UUID();
    }
    // Setter Member Functions

    // Getter Member Functions
    unsigned int getNmec() const;

};


#endif //CLASS05_STUDENT_H
