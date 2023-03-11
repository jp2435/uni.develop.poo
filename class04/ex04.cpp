#include <iostream>
#include <algorithm>
using namespace std;

#include "./ex04/Ship.h"

bool IsSlashNewLine(char c){
    return (c == '\n');
}
Ship Criar(int number){
    string name;
    float latitude,longitude;
    cout << number << "º Ship name:";
    getline(cin,name,'$');
    name.erase(remove_if(name.begin(),name.end(),IsSlashNewLine),name.end());
    cout << "Longitude:";
    cin >> longitude;
    cout << "Latitude:";
    cin >> latitude;
    return Ship(name,latitude,longitude);
}
int main(){
    Ship s1 = Criar(1),
         s2 = Criar(2),
         s3 = Criar(3);

    s1.showInfo();
    s2.showInfo();
    s3.showInfo();

    return 0;
}