#ifndef TIME_H_EX01
#define TIME_H_EX01

class Time{
private:
    unsigned int Hours_,Minutes_,Seconds_;
public:
    explicit Time(unsigned int h=0,unsigned int m=0,unsigned int s = 0) : Hours_(h),Minutes_(m),Seconds_(s){}
    // Setter Member Functions
    void SetHours(unsigned int h){
        Hours_ = h;
    }
    void SetMinutes(unsigned int m){
        Minutes_ = m;
    }
    void SetSeconds(unsigned int s){
        Seconds_ = s;
    }
    // Getter Member Functions
    unsigned int GetHours() const {
        return Hours_;
    }
    unsigned int GetMinutes() const {
        return Minutes_;
    }
    unsigned int GetSeconds() const {
        return Seconds_;
    }
};

#endif
