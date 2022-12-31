#include<iostream>
using namespace std;
int main(){
	//declear varibale
	string pid,first_name,last_name,gender,address1,address2;
	int age;
	float totalScore;
	
	cout<<"Enter Identity ID:"; 	getline(cin,pid);
	cout<<"Enter First Name:"; 		getline(cin,first_name);
	cout<<"Ener Last Name:"; 		getline(cin,last_name);
	cout<<"Enter Gender:"; 			getline(cin,gender);
	cout<<"Enter Address1:"; 		getline(cin,address1);
	cout<<"Enter Address2:"; 		getline(cin,address2);
	
	cout<<"Enter Age:"; 			cin>>age;
	cout<<"Etner total score:"; 	cin>>totalScore;
	
	system("CLS"); // clear screen
	
	cout<<"\tResult After Input Student Information"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<pid<<"\t"<<first_name<<"\t"<<last_name<<"\t"<<gender
		<<"\t"<<address1<<"\t"<<address2<<"\t"<<age<<"\t"<<totalScore<<endl;		
		
	return(0);
}




