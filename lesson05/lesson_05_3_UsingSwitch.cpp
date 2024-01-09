#include<iostream>
using namespace std;
int main(){
	// 2+3=5
	// 3*5=15
	int a,b;
	char op; // operator
	cout<<"Enter a:"; cin>>a;
	cout<<"Enter b:"; cin>>b;
	cout<<"Enter Operator(+,-,*,/):"; cin>>op;
	
	switch(op){
		case '+':
			cout<<"\t"<<a<<"+"<<b<<"="<<a+b<<endl;
			break;
		case '-':
			cout<<"\t"<<a<<"-"<<b<<"="<<a-b<<endl;
			break;
		case '*':
			cout<<"\t"<<a<<"x"<<b<<"="<<a*b<<endl;
			break;
		case '/':
			cout<<"\t"<<a<<"/"<<b<<"="<<a/b<<endl;
			break;
		default:
			cout<<"Invalide Operator(+,-,*,/) !";
			break;		
	}
	
	return(0);
}
