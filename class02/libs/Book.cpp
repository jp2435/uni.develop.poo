#include "Book.h"

int Book::UUID(){
    static int id = 99;
    id+=1;
    return id;
}
void Book::SetID(){
    id_ = UUID();
}
void Book::SetTitle(std::string title){
    title_ = std::move(title);
}
void Book::SetType(std::string type){
    type_ = std::move(type);
}
void Book::SetLoan(bool State){
    Loan_ = State;
}
void Book::SetLoanedId(int ID){
    bool State = true;
    idLoaned_ = ID;
    if(ID == 0) State = false;
    this->SetLoan(State);
}