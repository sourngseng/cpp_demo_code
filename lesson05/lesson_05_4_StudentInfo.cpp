#include<iostream>
using namespace std;
int main(){
	string id,name,gender,class_name;
	float math,csh,vb,java,total,avg;
	char grade;
	
	cout<<"\tEnter Student Information"<<endl;
	cout<<"\t---------------------------------------"<<endl;
	cout<<"Enter ID:"; cin>>id;
	cout<<"Enter Name:"; cin>>name;
	cout<<"Enter Gender:"; cin>>gender;
	cout<<"Enter Class Name:"; cin>>class_name;
	cout<<"\t=== Enter Student Score==========="<<endl;
	cout<<"Math :"; cin>>math;
	cout<<"C# :"; cin>>csh;
	cout<<"VB.Net : "; cin>>vb;
	cout<<"Java : "; cin>>java;
	
	total=(math+csh+vb+java);
	avg=(total/4);
	
	if(avg>90){
		grade='A';
	}else if(avg>80){
		grade='B';
	}else if(avg>70){
		grade='C';
	}else if(avg>60){
		grade='D';
	}else if(avg>50){
		grade='E';
	}else{
		grade='F';
	}
	
	cout<<"Total Score :"<<total<<endl;
	cout<<"AVG :"<<avg<<endl;
	cout<<"GRADE :"<<grade<<endl;
	
	system("cls"); // for clear screen
	cout<<"\t----------------------------------\n";
	cout<<"\t|ID \t NAME \tGENDER \tCLASS"<<endl;
	cout<<"\t|-------------------------------|"<<endl;
	cout<<"\t|"<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<class_name<<" |"<<endl;
	cout<<"\t|...............................|"<<endl;
	cout<<endl;
	
	cout<<"\t---------------------------------\n";
	cout<<"\t| Math \tC# \t VB \t Java\t|"<<endl;
	cout<<"\t|-------------------------------|"<<endl;
	cout<<"\t|"<<math<<"\t"<<csh<<"\t"<<vb<<"\t"<<java<<"\t |"<<endl;
	cout<<"\t|--------------------------------|"<<endl;
	cout<<"\t + Total Score :"<<total<<endl;
	cout<<"\t + AVG :"<<avg<<endl<<"\t + Grade :"<<grade<<endl;
	
	
	return(0);
}
