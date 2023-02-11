#include <iostream>

using namespace std;
/*
 * Simples exemplo de um classe em C++
 * Como atributos e Métodos
 */

class Retangulo{
private:
    // Atributos
    int base,altura;
public:
    // Métodos
    void Inicializar(int b,int a){
        base = b;
        altura = a;
    }
    int Area(){
        return base*altura;
    }
};

int main(){
    Retangulo rect1, rect2;
    rect1.Inicializar(4,5);
    cout << rect1.Area() << endl;
    rect2.Inicializar(20,4);
    cout << rect2.Area() << endl;
    return 0;
}