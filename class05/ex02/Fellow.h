#ifndef FELLOW_H_EX02
#define FELLOW_H_EX02

#include "./Student.h"

class Fellow: public Student {
private:
    double scholarship_;
public:
    Fellow(const std::string &name,unsigned int cc, const Date& birth,const Date& enroll=CurrentTime(),double scholarship=1000.00):
        Student(name,cc,birth,enroll), scholarship_(scholarship){}
};


#endif
