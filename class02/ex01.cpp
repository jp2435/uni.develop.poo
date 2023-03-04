#include <iostream>
#include <iomanip>
#include <algorithm>

#include "./libs/Book.h"
#include "./libs/User.h"
using namespace std;

/*
 * [x] Guardar user num vetor os ID's do Users(Correção guardar o objeto em si)
 *      - Guardar a lista de users num vetor do tipo User
 * [] Guardar user num ficheiro (Para não perder progresso)
 * [] Ao criar user analisar se já existe algum com o mesmo Nmec
 */

vector<User> UserList;
vector<int> UserNmecList;

vector<Book> BookList;
vector<int> BookIdList;

int FindUser(int Nmec){
    int IndexFound = -1;

    for(int i = 0;i<UserNmecList.size();i++){
        if(UserNmecList.at(i) == Nmec){
            IndexFound = i;
            break;
        }
    }
    // Se IndexFound == -1 é por que não foi encontrado nenhum elemento
    return IndexFound;
}

bool IsSlashNewLine(char c){
    return (c== '\n');
}
void ShowUser(User *CurrentUser){
    cout << setw(17) << setfill('-') << "\n"
         << "Name: " << (*CurrentUser).GetName() << endl
         << "Course: " << (*CurrentUser).GetCourse() << endl
         << "Nmec: " << (*CurrentUser).GetNmec() << endl
         << setw(17) << setfill('-') << "\n";
}
void CreateUser(){
    string name,course;
    int Nmec=0;

    cout << "Name(Finish with $):";
    getline(cin,name,'$');
    name.erase(remove_if(name.begin(),name.end(), IsSlashNewLine), name.end());

    cout << "Course(Finish with $):";
    getline(cin,course,'$');
    course.erase(remove_if(course.begin(),course.end(), IsSlashNewLine), course.end());

    do{
        cout << "Nmec:";
        cin >> Nmec;
    }while(Nmec <= 0);

    User CurrentUser(name,course,Nmec);

    UserNmecList.push_back(CurrentUser.GetNmec());
    UserList.push_back(CurrentUser);

    ShowUser(&CurrentUser);
}
void DeleteUser(){
    int NmecSearch;
    int IndexFound = -1;

    cout << "Enter the User's Nmec:";
    cin >> NmecSearch;

    for(int i = 0;i<UserNmecList.size();i++){
        if(UserNmecList.at(i) == NmecSearch){
            IndexFound = i;
            break;
        }
    }
    if(IndexFound != -1){
        // Caso seja encontrado algum aluno
        UserNmecList.erase(UserNmecList.begin()+IndexFound);
        UserList.erase(UserList.begin()+IndexFound);
        cout << "User with Nmec " << NmecSearch << " deleted successfuly\n";
    }else{
        // Caso não seja encontrado nada dentro do vetor
        cout << "No User found with Nmec " << NmecSearch << endl;
    }
}

void ShowBook(Book* CurrentBook){
    bool Status = (*CurrentBook).IsLoaned();
    cout << setw(17) << setfill('-') << "\n"
         << "Title: " << (*CurrentBook).GetTitle() << endl
         << "Type: " << (*CurrentBook).GetType() << endl
         << "Loaned:" << Status << endl;
    if(Status){
        cout << "ID Loaned:" << (*CurrentBook).GetIDLoaned() << endl;
    }
    cout << setw(17) << setfill('-') << "\n";
}
void CreateBook(){
    string title,type;
    cout << "Title(Finish with $):";
    getline(cin,title,'$');
    title.erase(remove_if(title.begin(),title.end(), IsSlashNewLine), title.end());

    cout << "Type(Finish with $):";
    getline(cin,type,'$');
    type.erase(remove_if(type.begin(),type.end(), IsSlashNewLine), type.end());

    Book CurrentBook(title,type);

    BookIdList.push_back(CurrentBook.GetId());
    BookList.push_back(CurrentBook);

    ShowBook(&CurrentBook);
}

void MakeLoan(){
    User uCurrent;
    Book bCurrent;



}

void Menu(){
    cout << "Menu" << endl
         << setw(17) << setfill('-') << "\n"
         << "1 - Enrol Student\n"
         << "2 - Remove Student\n"
         << "3 - Print list of Students\n"
         << "4 - Register new book\n"
         << "5 - Print list of books\n"
         << "6 - Loan\n"
         << "7-  Return\n"
         << "8 - Load library's info from a csv file\n"
         << "9 - Save current library's into a csv file\n"
         << "10- Exit\n"
         << setw(17) << setfill('-') << "\n"
         << "Option:";
}

int main(){
    int option;
    do {
        Menu();
        cin >> option;

        switch (option) {
            case 1:
                // Create User
                CreateUser();
                break;
            case 2:
                //Delete User
                DeleteUser();
                break;
            case 3:
                //List of users
                for(const User& current: UserList){
                    cout << current.GetName() << endl;
                }
                break;
            case 4:
                //Register Book
                CreateBook();
                break;
            case 5:
                //List of Book's
                for(const Book& current : BookList){
                    cout << current.GetType() << endl;
                }
                break;
            case 6:
                // Loan
                break;
            case 7:
                // Return
                break;
            case 8:
                // Load File
                break;
            case 9:
                // Save File
                break;
            case 10:
                return 0;
            default:
                cout << "Incorrect Option\nTry Again!\n";
                break;
        }
    }while(true);
}