#include<iostream>
using namespace std;
int main(){
	const int minutPerHour=60; // contant mean read-only variable
	const float PI=3.1416;
	
	cout<<"Now PI="<<PI<<endl;	
	
	PI=3.14159;	// can't assign again!	
	cout<<"Now PI="<<PI<<endl;
	return(0);
}





