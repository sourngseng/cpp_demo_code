// L02_ex02_UserInput.cpp
#include<iostream>
using namespace std;

int main(){
	// បង្កើតអថេរ ឈ្មោះ a,b និង sum ដែលមានប្រភេទទិន្ន​ន័យជាចំនួនគត់ 
	// declear variables a,b and sum as integer 
	int a,b,sum;
    int x,y,sub;
    
	
	// បញ្ចូលតម្លៃទៅអោយ a និង b
	//Input Data to varibale a and b;
	cout<<"Enter Value a:";
	cin>>a; // បញ្ចូលតម្លៃអោយ a ពី Keyboard
	cout<<"Enter Value b:";
	cin>>b; // បញ្ចូលតម្លៃអោយ b ពី Keyboard
	
	// គណនា ផលបូក a និង b Calculate
	sum=a+b;
	
	// បង្ហាញលទ្ធផល Display Result
	cout<<"Result is :"<<sum<<endl;
	cout<<a<<"+"<<b<<"="<<sum<<endl;

	cout<<"\t  "<<a<<endl;
	cout<<"\t"<<"+"<<endl;
	cout<<"\t  "<<b<<endl;
	cout<<"\t------------"<<endl;
	cout<<"\t  "<<sum<<endl;	
	
	return(0);
}


