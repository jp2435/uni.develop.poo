#include <iostream>

using namespace std;

template<class Type>
Type Largest(Type a, Type b){
    Type res;
    if(a>b || a == b){
        res = a;
    }else{
        res = b;
    }
    return res;
}

int main(){
    double Da=4.4,Db=3.9;
    float Fa=3.2,Fb=3.1999999;
    int Ia=10,Ib=10;

    cout << "Largest Double: " << Largest(Da,Db) << endl
         << "Largest Float: " << Largest(Fa,Fb) << endl
         << "Largest Int: " << Largest(Ia,Ib);
    return 0;
}