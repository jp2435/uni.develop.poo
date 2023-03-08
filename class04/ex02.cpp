#include <iostream>

#include "./ex02/Complex.h"
using namespace std;

int main(){
    Complex c1(2,3),c2(4,6);
    Complex c3;

    c3= c1+c2;
    cout << "Soma:"; c3.Show();

    c3 = c1-c2;
    cout << "\nSubtracao:"; c3.Show();

    c3 = c1*c2;
    cout << "\nMultiplicacao"; c3.Show();

    c3 = c1/c2;
    cout << "\nDivisao:"; c3.Show();

    return 0;
}