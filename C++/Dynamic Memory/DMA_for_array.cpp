/* wap to allocate memory for array */

#include <iostream>

using namespace std ;

int main ()
{
    cout << "Memory Allocation for Array and size is 10; \n ";

    int *arr = new int[10];   // [10] -> size of array is 10
    
    cout << "Enter data inside the array \n";

    for (int i=0; i<10; i++)
    {
        cin>> arr[i];
    }

    cout << "Array is - > ";
    for (int i=0; i<10; i++)
    {
        cout<< arr[i];
        cout <<"\n";
    }
    
    return 0;
}