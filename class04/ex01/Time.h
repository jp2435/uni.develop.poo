#ifndef TIME_H_EX01
#define TIME_H_EX01

class Time{
private:
    unsigned int Hours_,Minutes_,Seconds_;
public:
    explicit Time(unsigned int h=0,unsigned int m=0,unsigned int s = 0) : Hours_(h),Minutes_(m),Seconds_(s){}
    // Setter Member Functions
    void SetHours(unsigned int h);
    void SetMinutes(unsigned int m);
    void SetSeconds(unsigned int s);
    // Getter Member Functions
    unsigned int GetHours() const;
    unsigned int GetMinutes() const;
    unsigned int GetSeconds() const;
};

#endif
