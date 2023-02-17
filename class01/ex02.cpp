#include <iostream>
#include <iomanip>
#include "./ex02/Collection.h"

using namespace std;

int main(){
    Circle circle("White",0,2,3);
    Rectangle rectangle("Blue",4.5,-1.4,5,4);
    Square square("Red",3,3.4,5);
    
    cout << "Perimetro do circulo:" << circle.GetPerimeter() << endl
         << "Area do circulo:" << circle.GetArea() << endl
         << setw(12)<<left << setfill('-') << "" << "\n"
         << "Perimetro do rectangulo:" << rectangle.GetPerimeter() << endl
         << "Area do rectangulo:" << rectangle.GetArea() << endl
         << setw(12)<<left << setfill('-') << "" << "\n"
         << "Perimetro do quadrado:" << square.GetPerimeter()
         << "Area do quadrado:" << square.GetArea();
    return 0;
}