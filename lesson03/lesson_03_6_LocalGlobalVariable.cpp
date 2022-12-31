#include<iostream>
using namespace std;

//Declear Global Variables
	int stuAge;
	float stuScore;
	string stuName;

void displayStudent(){
	
	cout<<"Enter Name:"; 	getline(cin,stuName);
	cout<<"Enter Age:"; 	cin>>stuAge;
	cout<<"Enter Score:"; 	cin>>stuScore;
	cout<<"----------Result---------------"<<endl;
	cout<<"Name:"<<stuName<<endl;
	cout<<"Age :"<<stuAge<<endl;
	cout<<"Score:"<<stuScore<<endl;	
}

int main(){	
	//Assign value to variables
	stuAge=19;
	stuScore=98;
	stuName="Long Dara";
	
	//Display Value from Variables
	cout<<"Name:"<<stuName<<endl;
	cout<<"Age :"<<stuAge<<endl;
	cout<<"Score:"<<stuScore<<endl;
		
	cout<<"-------------------------"<<endl;
	displayStudent(); //call function
	
	return(0);
}
