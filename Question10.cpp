#include <iostream>
#include <cstring> 

using namespace std;

void reverseString(char *str)
 {
    if (str == nullptr || *str == '\0') 
		{
        return;
    }

    char *start = str;                 
    char *end = str + strlen(str) - 1; 
    char temp;

   
    while (start < end)
		 {
        temp = *start;
        *start = *end;
        *end = temp;

        start++; 
        end--;  
    }
}

int main()
 {
    const int MAX_SIZE = 100; 
    char userString[MAX_SIZE];

    cout << "Enter a string to reverse: ";
    cin.getline(userString, MAX_SIZE);

    cout << "Original String: " << userString << endl;

    
    reverseString(userString);

    cout << "Reversed String: " << userString << endl;

    return 0;
}
