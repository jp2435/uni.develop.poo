#include "Time.h"

void Time::SetHours(unsigned int h) {
    Hours_ = h;
}
void Time::SetMinutes(unsigned int m) {
    Minutes_ = m;
}
void Time::SetSeconds(unsigned int s) {
    Seconds_ = s;
}

unsigned int Time::GetHours() const {
    return Hours_;
}
unsigned int Time::GetMinutes() const {
    return Minutes_;
}
unsigned int Time::GetSeconds() const {
    return Seconds_;
}