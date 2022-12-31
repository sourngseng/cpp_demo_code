/*
	if(condition){
		//body code...
	}
	
	if(condition){
		//body code.. when condition true
	}else{
		//body code.. when condition false
	}
*/

#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter a:"; cin>>a;
	cout<<"Enter b:"; cin>>b;
	
	if(a>b){
		cout<<"\t When if true..."<<endl;
		cout<<"\t Now "<<a<<" > "<<b<<endl;
	}else{
		cout<<"\t When if false.."<<endl;
		cout<<"\t Now "<<a<<" < "<<b<<endl;
	}	
	
	return(0);
}






