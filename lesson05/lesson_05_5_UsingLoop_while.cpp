#include<iostream>
using namespace std;
int main(){
	int sum=0;
	int i=1;
	while(i<=100){
		sum+=i;	
		cout<<"- when i="<<i<<", sum="<<sum<<endl;
		i++;
	}
	cout<<"Result of Sum="<<sum<<endl;
	
	return(0);
}
