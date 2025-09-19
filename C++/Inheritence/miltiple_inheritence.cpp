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
            cout<<"Number is -> "<<n<<endl;
        }
    };

    class B             // Another Base Class
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
            cout<<"Another number is -> "<<m<<endl;
        }
    };

    class C : public A, public B            // Derived Class 
    {
        private : int sum;

        public :

        void add ()
        {
            sum = n + m;
        }

        void show()
        {
            cout<<endl;
            cout<<"Sum is -> "<<sum;
        }
    };

    int main ()
    {
        C obj;
        obj.input();
        obj.input2();
        obj.display();
        obj.display2();
        obj.add();
        obj.show();

        return 0;
    }

