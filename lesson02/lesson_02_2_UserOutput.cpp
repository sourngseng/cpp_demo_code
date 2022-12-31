#include<iostream>
using namespace std;

int main(){
	//declear variable
	int a,b,sum;
	
	//Input Data to varibale a and b;
	cout<<"Enter Value a:";
	cin>>a;
	cout<<"Enter Value b:";
	cin>>b;
	
	//Calculate
	sum=a+b;
	
	//Display Result
	cout<<"Result is :"<<sum<<endl;
	cout<<a<<"+"<<b<<"="<<sum<<endl;
	cout<<"\t  "<<a<<endl;
	cout<<"\t"<<"+"<<endl;
	cout<<"\t  "<<b<<endl;
	cout<<"\t------------"<<endl;
	cout<<"\t  "<<sum<<endl;	
	
	return(0);
}


