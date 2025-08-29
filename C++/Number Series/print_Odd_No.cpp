// WAP to print odd number 1 to 50

#include<iostream>
using namespace std;

int main()
{
    cout<<"Odd numbers under 50 : ";

    for( int i=0; i<50; i++)
    {
        if (i/2!=0)
        {
            cout<<i ;
        }
        cout<<"\n";
    }
    return 0;
}