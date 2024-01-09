#include<iostream>
using namespace std;

//Run ដំបូងគេគឺ function int main()
int main(){
    
    int a,b,sum; //បង្កើតអថេរ a, b និង​ sum
  
    // រក្សាទុក​តម្លៃ a=3, b=5
    a=3; b=5;
    sum=a+b; //sum=3+5 , sum=8

    cout<<"Result of Sum is ="; // Result of Sum is = 8
    cout<<sum<<endl;
    //6x+2x=2x(3+1)  or x(6+2)
    cout<<"Result of Sum is = "<<sum<<endl;
    cout<<"-----------------------"<<endl;

    cout<<2;
    cout<<"+";
    cout<<3;
    cout<<"=";
    cout<<5;
    cout<<endl;

    cout<<2<<"+"<<3<<"="<<5<<endl;

    cout<<2<<"+"<<3<<"="<<5<<endl;

    cout<<"\n--------------------------"<<endl;
    cout<<"Enter value a: "; //បង្ហាញពាក្យ​ Enter value a:
    cin>>a; //បង្ហាញ currsor សម្រាប់បញ្ចូលតម្លៃ a
    cout<<"Enter value b: ";
    cin>>b;
        sum=a+b;
    
    cout<<"Result of Sum is ="<<sum<<endl; 

    system("pause");


    
    

    return(0);
}