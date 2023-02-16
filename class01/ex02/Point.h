/*
 * Header da classe Point
 */
#ifndef POINT_CLASS_EX02
#define POINT_CLASS_EX02

class Point{
private:
    double px_;
    double py_;
public:
    void SetCoord(double px,double py){
        px_ = px;
        py_ = py;
    }
    double GetXCoord() const{
        return px_;
    }
    double GetYCoord() const{
        return py_;
    }
};

#endif
