#ifndef CLASS01_TIME_H
#define CLASS01_TIME_H
#include <iostream>
class Time{
private:
    //Atributos
    unsigned int Hour_,Minute_,Second_;
    void Normalize();
public:
    //Construtor
    /*Time(){
            Hour = 0;
            Minute = 0;
            Second = 0;
        }
        Time(unsigned int h,unsigned int m,unsigned int s){
            Hour = h;
            Minute = m;
            Second = s;
        }*/
    explicit Time(unsigned int h=0,unsigned int m = 0,unsigned int s = 0);

    // Metodos
    void ShowTime() const;
    int GetSeconds() const;
    int GetMinutes() const;
    int GetHours() const;
    void Add(Time FirstTime,Time SecondTime);
};

#endif //CLASS01_TIME_H
