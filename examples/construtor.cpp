#include <iostream>

using namespace std;

/*
 * Construtores necessitam de ter exatamente o mesmo nome que a class
 * Ou seja, se a class tem o nome PaRaLeLo o contrutor também será PaRaLeLo
 * Construtor vai realizar a inicialização do objeto com os seus atributos
 * O que não acontece quando não temos contrutor com no exemplo do rectangulo.cpp
 * Nesse caso existe a necessidade que criar um método apenas para realizar a inicialização
 */

class Retangulo{
private:
    // Atributos
    int base,altura;
public:
    // Construtor
    Retangulo(int b, int a){
        base = b;
        altura = a;
    }
    // Metodo
    int area(){
        return base*altura;
    }
};

int main(){
    Retangulo Ret1(4,3);
    cout << Ret1.area() << endl;
    Retangulo Ret2(5,4);
    cout << Ret2.area();
    return 0;
}