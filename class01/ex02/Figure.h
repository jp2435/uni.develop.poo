#ifndef FIGURE_CLASS_EX02
#define FIGURE_CLASS_EX02
#include <iostream>
#include <string>

#include "Point.h"

class Figure{
private:

protected:
    std::string color_;
    Point center_;
public:
    //Setter Member Functions
    void SetColor(std::string Color){
        color_ = Color;
    }
    void SetCenter(double CenterX,double CenterY){
        center_.SetCoord(CenterX,CenterY);
    }

    //Geter Member Functions
    std::string GetColor() const{
        return color_;
    };
    double GetCenterX(){
        return center_.GetXCoord();
    }
    double GetCenterY() {
        center_.GetYCoord();
    }

};
#endif
