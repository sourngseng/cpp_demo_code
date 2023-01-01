//File Name :  L03_ex_01_createVariable.cpp
#include "iostream"
using namespace std;
int main(){

    //បង្កើតអថេរឈ្មោះថា myAge
    int myAge;

    myAge=35; // បញ្ចូលតម្លៃ 35 ទៅអោយអថេរ myAge

    // Show result: Now, I am 35 years old!
    cout<<"Now, I am "<<myAge<<" years old!"<<endl; 

    cout<<"Enter Next Year: ";
    cin>>myAge;
    
    cout<<"Next year, I am "<<myAge<<" years old!"<<endl;
    return(0);
}

