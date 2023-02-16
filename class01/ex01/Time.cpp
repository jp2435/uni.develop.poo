#include "Time.h"

Time::Time(unsigned int h,unsigned int m,unsigned int s){
    Hour_ = h;
    Minute_ = m;
    Second_ = s;
}
// const é usado pois serve para indicar que a função não ira realizar nenhuma alteração aos atributos
void Time::ShowTime() const{
    std::cout << ((Hour_ > 9) ? "" : "0") << Hour_ << ":"
              << ((Minute_ > 9) ? "": "0") << Minute_ << ":"
              << ((Second_ > 9) ? "": "0") << Second_ << std::endl;
}
int Time::GetSeconds() const{
    return Second_;
}
int Time::GetMinutes() const{
    return Minute_;
}
int Time::GetHours() const{
    return Hour_;
}
void Time::Add(Time FirstTime,Time SecondTime){
    Second_ = FirstTime.GetSeconds() + SecondTime.GetSeconds();
    Minute_ = FirstTime.GetMinutes() + SecondTime.GetMinutes();
    Hour_ = FirstTime.GetHours() + SecondTime.GetHours();
    Normalize();
}

void Time::Normalize() {
    if(Second_ > 59){
        Second_ %= 60;
        Minute_ += 1;
    }
    if(Minute_ > 59){
        Minute_ %= 60;
        Hour_ += 1;
    }
    if(Hour_ > 23){
        Hour_ %= 24;
    }
}