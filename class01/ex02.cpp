#include <iostream>
#include "./ex02/Collection.h"

using namespace std;

int main(){
    /*
    Point ponto(3,4);
    cout << ponto.GetXCoord() << endl << ponto.GetYCoord() << endl;
     */
    //Figure fig("HEllo",3,4);
    //cout << fig.GetColor();
    //fig.ShowCenter();

    Circle circle("White",0,2,3);
    cout << circle.GetArea() << endl;
    Rectangle rec;
    cout << rec.GetPerimeter() << endl;

    return 0;
}