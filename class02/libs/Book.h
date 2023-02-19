#ifndef CLASS02_BOOK_H
#define CLASS02_BOOK_H
#include <iostream>

class Book{
private:
    int id_;
    std::string title_;
    std::string type_;
    void SetID(){
        id_ = UUID();
    }
public:
    int UUID(){
        static int id = 99;
        id+=1;
        return id;
    }

};


#endif //CLASS02_BOOK_H
