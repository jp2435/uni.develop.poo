/*
 * Coleção de todas as figuras possiveis
 */

#ifndef CIRCLE_CLASS_EX02
#define CIRCLE_CLASS_EX02
#include <cmath>
#include "Figure.h"
#define PI 3.1415

class Circle:public Figure{
private:
    double radius_;
public:
    Circle(std::string Color="White",double CenterX=0,double CenterY=0,double Radius=1){
        SetColor(Color);
        SetCenter(CenterX,CenterY);
        SetRadius(Radius);
    }
    void SetRadius(double Radius){
        if(Radius <= 0){
            std::cout << "\n***Warning***\n"
                      << "Radius tried to be set with an invalid value\n"
                      << "It has been fixed to a default value: 1\n"
                      << "***Warning Ended***";
            radius_ = 1;
        }else{
            radius_ = Radius;
        }
    }

    float GetPerimeter(){
        return (float) (2*radius_)*PI;
    }
    float GetArea(){
        return (float) pow(radius_,2)*PI;
    }

};
class Rectangle:public Figure{
private:
    int sides;
public:
    Rectangle(){

    }
    void GetPerimeter(){}
    void GetArea(){}
};
class Square{};
class Triangle{};


#endif