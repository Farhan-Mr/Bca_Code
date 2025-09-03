/* WAP to allocte a variable dynamically and print it  */

#include<iostream>

    using namespace std;

    int main ()
    {
        int *p = new int;
        *p = 42;

        cout<<"Value of p is  "<<*p <<endl;

        return 0;
    }