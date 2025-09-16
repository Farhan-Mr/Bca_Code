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

    class B
    {
        protected : int m;

        public :

        void input2 ()
        {
            cout<<"Enter another number : ";
            cin>>m;
        }
        void display2()
        {
            cout<<"Another number is -> "<<m;
        }
    };

    class C : public A, public B
    {
        private : int sum;

        public :

        void add ()
        {
            sum = n + m;
        }

        void show()
        {
            cout<<"Sum is -> "<<sum;
        }
    };

    int main ()
    {
        
        return 0;
    }

