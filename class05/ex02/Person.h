#ifndef PERSON_H_EX02
#define PERSON_H_EX02
#include <iomanip>
#include "./Date.h"

class Person {
protected:
    std::string name_;
    unsigned int cc_;
    Date birth_date_;
public:
    explicit Person(std::string& name, unsigned int cc,Date& birth):
            name_(name),
            cc_(cc),
            birth_date_(birth){}
    ~Person() = default;
    // Setter Member Functions

    // Getter Member Functions
    std::string getName() const;
    unsigned int getCc() const;
    const Date &getBirthDate() const;
};

#endif