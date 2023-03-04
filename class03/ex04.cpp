#include <iostream>

using namespace std;

template<class Type>
Type Power(Type n,unsigned int p = 2){
    Type res = n;
    if(p==0){
        res = 1;
    }else{
        for(p;p>1;p--) {
            res *= n;
        }
    }
    return (Type) res;
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