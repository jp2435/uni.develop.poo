#include <iostream>

using namespace std;
class User{
private:
    string name;
    string course;
    int Nmec;
public:
    //Setter Member functions
    void SetName(){}
};
class Book{
private:
    int id_;
    string title_;
    string type_;
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
int main(){

    return 0;
}