#include <iostream>

using namespace std;

// Template do ex05
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

template<class Type1,class Type2>
Type1 Largest(Type1 a,Type2 b){
    if(a>b || a==b){
        return (Type1) a;
    }else{
        return (Type1) b;
    }
}

int main(){
    double Da=4.42,Db=4.41;
    float Fa=3.34321323,Fb=3.1415;
    int Ia=10,Ib=12;
    std::string a="1",b="3";

    cout << "Float/Double: " << Largest(Fa,Db) << endl
         << "Int/Float: " << Largest(Ia,Fb) << endl
         << "Double/Int: " << Largest(Da,Ib);

    return 0;
}