#include<iostream>
#include<malloc.h>
#include<stdlib.h>
using namespace std;
int main(){
	int x,*px;
	float y,*py;
	x=25;
	px=(int*) malloc(sizeof(int));
	*px=45;
	y=23;
	py=(float*) malloc(sizeof(float));
	*py=43.56;
	cout<<"\t valude x:"<<x<<endl;
	cout<<"\t address x:"<<&x<<endl;
	cout<<"\t value px="<<*px<<endl;
	cout<<"\t address px="<<px<<endl;
	
	return(0);
}
