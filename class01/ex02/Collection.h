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
    //Adicionar outros construtores
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
    double width_; // Comprimento/Largura
    double height_; // Altura
public:
    Rectangle(){

    }
    void SetWidth(double Width){
        if(Width<=0){
            std::cout << "\n***Warning***\n"
                      << "Width tried to be set with an invalid value\n"
                      << "It has been fixed to a default value: 1\n"
                      << "***Warning Ended***";
            width_ = 1;
        }else{
            width_ = Width;
        }
    }
    void SetHeight(double Height){
        if(Height<=0){
            std::cout << "\n***Warning***\n"
                      << "Height tried to be set with an invalid value\n"
                      << "It has been fixed to a default value: 1\n"
                      << "***Warning Ended***";
            height_ = 1;
        }else{
            height_ = Height;
        }
    }
    virtual float GetPerimeter(){
        return (float) (2*width_)+(2*height_);
    }
    virtual float GetArea(){
        return (float) width_*height_;
    }
};
class Square: public Rectangle{
private:
    double width_;
public:
    // Adicionar mais construtores
    Square(std::string Color="White",double Cx=0,double Cy=0,double Width=1){
        SetWidth(Width);
    }
    float GetPerimeter(){
        return (float) width_*4;
    }
    float GetArea(){
        return (float) pow(width_,2);
    }
    void Testing(){
        
    }
};
class Triangle{};


#endif