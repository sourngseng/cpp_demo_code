#include<iostream>
using namespace std;
int main(){
	int sum=0;
	int i=1;
	char opt;
	do{
		sum+=i;	
		cout<<"- when i="<<i<<", sum="<<sum<<endl;
		i++;
		cout<<"Do you want to add more..?(y/n)";
		cin>>opt;
	}while(opt=='y'||opt=='Y');
	cout<<"Result of Sum="<<sum<<endl;	
	return(0);
}



