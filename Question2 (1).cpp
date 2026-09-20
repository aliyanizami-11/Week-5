#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	
	int* p1=&a;
	int* p2=&b;
	
	int tmp=*p1;
	*p1=*p2;
	*p2=tmp;
	cout<<"The values of the variables after swap is : "<<"a= "<<a<<" b= "<<b;
	return 0;
}
