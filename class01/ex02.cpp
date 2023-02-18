#include <iostream>
#include <iomanip>
#include "./ex02/Collection.h"

using namespace std;

int main(){
    Circle circle("White",0,2,3);
    Circle circle2("Green",2,3,4);
    Rectangle rectangle("Blue",4.5,-1.4,5,4);
    Square square("Red",3,3.4,6);
    
    cout << "Perimetro do circulo(1): " << circle.GetPerimeter() << endl
         << "Area do circulo(1): " << circle.GetArea() << endl
         << setw(12)<<left<<setfill('-')<<""<<"\n"
         << "Perimetro do circulo(2): " << circle2.GetPerimeter() << endl
         << "Area do circulo(2): " << circle2.GetArea() << endl
         << "Circulo(1) e (2) "
         << (circle.CheckIntersect(circle2) ? "intersetam-se": "não se intersetam") << endl
         << setw(12) << left << setfill('-')<<""<<"\n"
         << "Perimetro do rectangulo: " << rectangle.GetPerimeter() << endl
         << "Area do rectangulo: " << rectangle.GetArea() << endl
         << setw(12)<<left << setfill('-') << "" << "\n"
         << "Perimetro do quadrado: " << square.GetPerimeter()
         << "Area do quadrado: " << square.GetArea();
    return 0;
}