#ifndef DATE_H_EX02
#define DATE_H_EX02
#include <iomanip>

class Date {
private:
    unsigned int day_;
    unsigned int month_;
    unsigned int year_;
public:
    explicit Date(unsigned d = 1,unsigned m = 1,unsigned y = 1970) :
        day_(d),
        month_(m),
        year_(y){};

    virtual ~Date();
    // Setter Member Functions

    // Getter Member Functions
    unsigned int getDay() const;
    unsigned int getMonth() const;
    unsigned int getYear() const;

    friend std::ostream &operator<<(std::ostream &os, Date &t);
};


#endif
