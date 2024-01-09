#include <iostream>
using namespace std;

int main() {
    // declare variables
    int a = 12, b = 25;
	int result;
	
	result=a>b?a:b;
	cout<<"Result is :"<<result<<endl;  
	
	cout<<"------------------"<<endl;
	string str;
	str=a>b?"A is greater than b!\n":"b is greater than a\n";
	cout<<str;
	
    return 0;
}
