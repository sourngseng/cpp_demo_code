#include <iostream>
using namespace std;

int main() {
	//declear variable
    int a, b; 
    //assigning value to variables
    a = 7;
    b = 2;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;
    
    
    
    cout<<"Enter a:"; cin>>a;
    cout<<"Enter b:"; cin>>b;

    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
    
    float x;
    cout<<"Enter floating x:"; cin>>x;
    cout<<"x/a:"<<(x/a)<<endl;
    cout<<"a/x:"<<(a/x)<<endl;
    b=x/a;
    cout<<"Result b=x/a:"<<b<<endl;
    
    float c;
    c=x*a;
    cout<<"x * a="<<c<<endl;
    
    if (condition) {
		  // body of if statement
	}


    

    return 0;
}
