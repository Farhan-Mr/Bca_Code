/* Program of multiple inheritence */

#include <iostream>
    using namespace std;

    class A     // Base class 
    {
        protected : int n;

        public :

        void input ()
        {
            cout<<"Enter number : ";
            cin>>n;
        }

        void display ()
        {
            cout<<"Number is -> "<<n;
        }
    };

    int main ()
    {
        return 0;
    }

