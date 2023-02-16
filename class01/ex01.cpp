#include <iostream>
#include "./ex01/Time.h"
using namespace std;

int main(){
    Time Tempo1(16,20,6),Tempo2(5,45,4);
    Time Tempo3;

    Tempo3.Add(Tempo1,Tempo2);
    Tempo3.ShowTime();

    return 0;
}