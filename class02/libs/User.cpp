#include "User.h"

#include <utility>

void User::SetName(std::string Name){
    name_ = std::move(Name);
}