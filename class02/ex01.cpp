#include <iostream>
#include <iomanip>

#include "./libs/Book.h"
#include "./libs/User.h"
using namespace std;

/*
 * [x] Guardar user num vetor os ID's do Users
 * [] Guardar user num ficheiro (Para não perder progresso)
 */

vector<int> Users_ID;

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
                break;
            case 2:
                break;
            case 3:
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