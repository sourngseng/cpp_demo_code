#include<iostream>
using namespace std;

int main(){
	int a,b;
	a=3;b=5;
	cout<<2<<" + "<<3<<"="<<5<<endl;
	/*
	cout<<2;	cout<<"+";	cout<<3;	
	cout<<"=";	cout<<5;	cout<<endl;
	*/
	
	cout<<a<<"+"<<b<<"="<<a+b<<endl;
	
	cout<<"-------------------"<<endl;
	cout<<"Input Value to a,b from Keyboard"<<endl;
	cout<<"Enter a:"; cin>>a;
	cout<<"Enter b:"; cin>>b;
	cout<<a<<"+"<<b<<"="<<a+b<<endl;
	
	return(0);
}
