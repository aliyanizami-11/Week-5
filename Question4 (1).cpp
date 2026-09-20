//Write a C++ Program for Increment and Decrement an Integer Using a Pointer.
#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter an integer: ";
	cin>>a;
	int* p=&a;
	cout<<"The value of integer on increment is: "<<++(*p)<<'\n';
	cout<<"The value of integer on decrement is: "<<--(*p);
	return 0;
}
