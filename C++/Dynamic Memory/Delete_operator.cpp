/* WAP to allocate a variable dynamically and print it and deallocate */

#include<iostream>

    using namespace std;

    int main ()
    {
        int *p = new int(44);

        cout<<"Value of p is : "<<*p <<endl;

        delete p;   // de-allocte the memory 
        return 0;
    }