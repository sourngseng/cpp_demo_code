// C++ program demonstrating && operator truth table

#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int a = 5;
    int b = 9;
  
  	string username="";
  	string pwd="";
  	cout<<"Enter Username:"; cin>>username;
  	cout<<"Enter Password :"; cin>>pwd;  	
  	
  	if(username=="sourng" && pwd=="1234"){
  		cout<<"welcome to your system!"<<endl;
  		cout<<"Here is your testing Logic Code!"<<endl;
  		cout<<"---------------------------------"<<endl;
  		
  		// false && false = false
	    cout << ((a == 0) && (a > b)) << endl;
	  
	    // false && true = false
	    cout << ((a == 0) && (a < b)) << endl;
	
	    // true && false = false
	    cout << ((a == 5) && (a > b)) << endl;
	
	    // true && true = true
	    cout << ((a == 5) && (a < b)) << endl;  		
	}else{
		cout<<"Invalide Username & Password!"<<endl;
	}   

    return 0;
}
