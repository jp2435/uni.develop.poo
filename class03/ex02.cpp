#include <iostream>

using namespace std;

double Power(double& n, unsigned int p = 2){
    double res = n;
    if(p==0){
        res = 1;
    }else{
        for(p;p>1;p--) {
            res *= n;
        }
    }
    return (double) res;
};


int main(){
    double number;
    int power;
    cout << "Number:";
    cin >> number;
    do{
        cout << "Power:";
        cin >> power;
    }while(power<0);

    cout << "Power " << power << " of " << number<< " is "<<Power(number,power);
    return 0;
}