#ifndef CLASS_BOOK_H
#define CLASS_BOOK_H
#include <iostream>

class Book{
private:
    int id_;
    std::string title_;
    std::string type_;
    bool Loan_;
    int idLoaned_;

    void SetID();
    static int UUID();
public:
    // Construtor
    Book() = default;
    //Setter Member Functions
    void SetTitle(std::string title);
    void SetType(std::string type);
    void SetLoan(bool State);
    void SetLoanedId(int ID);

    //Getter Member Functions
};


#endif
