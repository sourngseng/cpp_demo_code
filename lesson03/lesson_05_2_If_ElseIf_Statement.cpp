
#include<iostream>
using namespace std;
int main(){
	float score;
	char grade;
	cout<<"Enter Score :";
	cin>>score;
	
	if(score>90){
		grade='A';
	}else if(score>80){
		grade='B';
	}else if(score>70){
		grade='C';
	}else if(score>60){
		grade='D';
	}else if(score>50){
		grade='E';
	}else{
		grade='F';
	}
	
	cout<<"Your Score is: "<<score<<" and GRADE : "<<grade<<endl;	
	return(0);
}
