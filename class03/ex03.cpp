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
short Power(short& n,unsigned int p =2){
    double res = n;
    if(p==0){
        res = 1;
    }else{
        for(p;p>1;p--) {
            res *= n;
        }
    }
    return (short) res;
}
int Power(int& n,unsigned int p = 2){
    int res = n;
    if(p==0){
        res = 1;
    }else{
        for(p;p>1;p--) {
            res *= n;
        }
    }
    return (int) res;
}
float Power(float& n, unsigned p = 2){
    float res = n;
    if(p==0){
        res = 1;
    }else{
        for(p;p>1;p--) {
            res *= n;
        }
    }
    return (float) res;
}
long Power(long& n, unsigned p = 2){
    long res = n;
    if(p==0){
        res = 1;
    }else{
        for(p;p>1;p--) {
            res *= n;
        }
    }
    return (long) res;
}

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