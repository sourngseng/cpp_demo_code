#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    system("cls");
    string mystr;
    cout<<"What is your name?";
    getline(cin,mystr);
    cout <<"Hello "<<mystr<<endl;
    cout <<"Whate is your favorite team?"<<endl;
    getline(cin,mystr);
    cout <<"I like "<< mystr <<" too!"<<endl;
    cin.get();
    system("pause");

    return 0;
}