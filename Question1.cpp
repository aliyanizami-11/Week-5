#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter two numbers to get there sum: ";
	cin>>a>>b;
	int* p1=&a;
	int* p2=&b;
	cout<<"The sum of two numbers using pointer is: "<<*p1+*p2;
	return 0;
}
