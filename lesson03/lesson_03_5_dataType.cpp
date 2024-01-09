#include<iostream>
using namespace std;
int main(){
	
	int stuAge=19;
	float stuScore=98;
	string stuName="Long Dara";
	
	cout<<"Name:"<<stuName<<endl;
	cout<<"Age :"<<stuAge<<endl;
	cout<<"Score:"<<stuScore<<endl;
	
	cout<<"-------------------------"<<endl;
	cout<<"Enter Name:"; 	getline(cin,stuName);
	cout<<"Enter Age:"; 	cin>>stuAge;
	cout<<"Enter Score:"; 	cin>>stuScore;
	cout<<"----------Result---------------"<<endl;
	cout<<"Name:"<<stuName<<endl;
	cout<<"Age :"<<stuAge<<endl;
	cout<<"Score:"<<stuScore<<endl;
	
	return(0);
}




