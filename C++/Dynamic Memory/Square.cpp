/* WAP to print square number and take input from user */

#include<iostream>
    using namespace std;

    int main ()
    {
        int n;
        cout<<"Enter number to find its square : ";
        cin>>n;

            long square = (n*n);

            cout<<"Square of given number is : "<<square<<endl;

        return 0;
        
    }