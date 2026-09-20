#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int *ptr = arr;

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }

    cout << "Sum = " << sum;

    return 0;
}
