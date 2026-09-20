#include <iostream>
using namespace std;

int main()
 {
    
    int size = 5;
    int arr[5];

    
    int *ptr = arr; 

    cout << "Enter " << size << " integer elements:\n";

    
    
    for (int i = 0; i < size; i++)
		 {
        cout << "Element " << i + 1 << ": ";
        cin >> *ptr; 
        ptr++;       
    }

    
    cout << "\nDisplaying the values using the array:\n";
    for (int i = 0; i < size; i++) 
		{
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
