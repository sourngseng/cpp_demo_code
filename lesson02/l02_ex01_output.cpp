#include<iostream>
using namespace std;

//Run ដំបូងគេគឺ function int main()
int main(){
    
    int a,b,sum; //បង្កើតអថេរ a, b និង​ sum

    // រក្សាទុក​តម្លៃ a=3, b=5
    a=3; b=5;
    sum=a+b;

    cout<<"Result of Sum is =";
    cout<<sum<<endl;
    //6x+2x=2x(3+1)  or x(6+2)
    cout<<"Result of Sum is = "<<sum<<endl;
    cout<<"-----------------------"<<endl;

    cout<<2;
    cout<<"+";
    cout<<3;
    cout<<"=";
    cout<<5;

    cout<<"\n--------------------------"<<endl;
    cout<<"Enter value a: ";
    cin>>a;
    cout<<"Enter value b: ";
    cin>>b;
        sum=a+b;
    
    cout<<"Result of Sum is ="<<sum<<endl; 

    return(0);
}