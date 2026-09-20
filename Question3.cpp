#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a value of the variable a: ";
	cin>>a;
	
	int* p=&a;
	cout<<"The adress of the variable a is: "<<p;
	return 0;
}
