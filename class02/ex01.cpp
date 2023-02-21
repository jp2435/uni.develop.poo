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
User CreateUser(){
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
    return CurrentUser;

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
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                return 0;
            default:
                cout << "Incorrect Option\nTry Again!\n";
                break;
        }
    }while(true);
}