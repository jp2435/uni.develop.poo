#include "Book.h"

int Book::UUID(){
    static int id = 99;
    id+=1;
    return id;
}
void Book::SetID(){
    id_ = UUID();
}