#ifndef CLASS_USER_H
#define CLASS_USER_H
#include <iostream>
#include <vector>

class User{
private:
    int idUsr_;
    std::string name_;
    std::string course_;
    int Nmec_;
    std::vector<int> LivrosId_;

    void SetID();
    static int UUID();
public:
    //Construtor
    explicit User(std::string name="Aluno",std::string course="LEEC",int Nmec=0);
    //Setter Member functions
    void SetName(std::string Name);
    void SetCourse(std::string Course);
    void SetNmec(int Nmec);
};

#endif
