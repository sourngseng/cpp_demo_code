#include<iostream>
using namespace std;

void testStaticVar(){
	static int var1=0;
	var1++;
	cout<<"Result Static Variable var1="<<var1<<endl;
}
void simpleVariable(){
	int sVar1=0;
	sVar1++;
	cout<<"Result of Simple Variable sVar1="<<sVar1<<endl;
}

int main(){
	
	testStaticVar();
	simpleVariable();
	
	testStaticVar();
	simpleVariable();
	
	testStaticVar();
	simpleVariable();		
	
	return(0);
}


