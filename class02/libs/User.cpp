#include "User.h"

#include <utility>

User::User(std::string name, std::string course, int Nmec){
    SetName(name);
    SetCourse(course);
    SetNmec(Nmec);
}

void User::SetName(std::string Name){
    name_ = std::move(Name);
}
void User::SetCourse(std::string course){
    course_ = std::move(course);
}
void User::SetNmec(int Nmec){
    Nmec_ = Nmec;
}

std::string User::GetName() const{
    return name_;
}
std::string User::GetCourse() const{
    return course_;
}
int User::GetNmec() const{
    return Nmec_;
}