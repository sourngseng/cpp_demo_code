#include<iostream>
using namespace std;
int main(){
	//1+2+3+4+5+6+..+100=?	
	//cout<<"Result="<<(1+2+3+4+5)<<endl;
	int sum=0;
	for(int i=1;i<=100;i++){		
		sum+=i;	
//	    sum=sum+1;	
		cout<<"- when i="<<i<<", sum="<<sum<<endl;
	}
	cout<<"Result of Sum="<<sum<<endl;
	
	return(0);
}
