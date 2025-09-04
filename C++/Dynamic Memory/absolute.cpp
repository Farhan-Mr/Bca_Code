/* WAP to enter a number and find its absolute value */

#include<iostream>
    using namespace std;

    int main ()
    {
        int n;
        cout<<"Enter number to to find ita absolute value : ";
        cin>>n;

        if(n>0)
        {
            cout<<"Absolute value of "<<n<<" is : "<< n <<endl;
        }
        else
        {
            cout<<"Absolute value of "<<n<<" is : "<< -n <<endl;
        }

        return 0;
    }