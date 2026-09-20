#include <iostream>

using namespace std;

void concatenateStrings(char *str1, const char *str2)
 {
   
    while (*str1 != '\0')
		 {
        str1++;
    }

    
    while (*str2 != '\0') 
		{
        *str1 = *str2; 
        str1++;        
        str2++;        
    }

   
    *str1 = '\0';
}

int main() 
{
   
    char string1[100] = "Hello, ";
    char string2[] = "World!";

    cout << "String 1: " << string1 << endl;
    cout << "String 2: " << string2 << endl;

    
    concatenateStrings(string1, string2);

    cout << "Concatenated String: " << string1 << endl;

    return 0;
}
