#include "User.h"

#include <utility>

void User::SetName(std::string Name){
    name_ = std::move(Name);
}
int User::UUID() {
    static int id = 0;
    id+=1;
    return id;
}
void User::SetID() {
    idUsr_ = UUID();
}