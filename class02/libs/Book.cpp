#include "Book.h"

Book::Book(std::string Title, std::string Type){
    SetID();
    SetTitle(Title);
    SetType(Type);
    SetLoanedId(0);
}
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
int Book::GetId() const{
    return id_;
}
std::string Book::GetTitle() const{
    return title_;
}
std::string Book::GetType() const{
    return type_;
}
bool Book::IsLoaned() const{
    return Loan_;
}
int Book::GetIDLoaned() const{
    return idLoaned_;
}