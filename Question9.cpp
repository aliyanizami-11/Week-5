#include <iostream>
using namespace std;

int main()
 {
    int n;

    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];      
    int *ptr = arr;  

    
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) 
		{
        cout << "Element " << i + 1 << ": ";
        cin >> *ptr; 
        ptr++;    
    }

    
    cout << "\nDisplaying values using the array syntax:\n";
    for (int i = 0; i < n; i++) 
		{
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
