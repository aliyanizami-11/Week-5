#include <iostream>
using namespace std;

int main()
{
	char str[15];
  cout << "Enter your first name: ";
  cin >> str;
	char* p= str;
	
	while(*p!='\0')
	{
		cout<<*p;
		p++;
	}
	return 0;
}
