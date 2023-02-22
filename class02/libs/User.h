#ifndef CLASS_USER_H
#define CLASS_USER_H
#include <iostream>
#include <vector>

class User{
private:
    std::string name_;
    std::string course_;
    int Nmec_;
    std::vector<int> LivrosId_;
public:
    //Construtor
    explicit User(std::string name="Aluno",std::string course="LEEC",int Nmec=0);
    //Setter Member functions
    void SetName(std::string Name);
    void SetCourse(std::string Course);
    void SetNmec(int Nmec);

    //Getter Member functions
    std::string GetName() const;
    std::string GetCourse() const;
    int GetNmec() const;
};

#endif