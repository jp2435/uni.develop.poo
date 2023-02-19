#ifndef CLASS_USER_H
#define CLASS_USER_H
#include <iostream>

class User{
private:
    std::string name_;
    std::string course_;
    int Nmec_;
public:
    //Setter Member functions
    void SetName(std::string Name);
};

#endif
