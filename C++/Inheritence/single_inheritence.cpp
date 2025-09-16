/* Program of single inheritence */

#include<iostream>
    using namespace std;

    class A         // Base Class
    {
        protected :  int a,b;

        public :

        void input()
        {
            cout<<"Enter A Number : ";
            cin>>a;
            cout<<"Enter B Number : ";
            cin>>b;
        }

        void display()
        {
            cout<<"A is : "<<a<<endl;
            cout<<"B is : "<<b<<endl;
        }

    };

    class B : public A      // Derived class 
    {
        private :   int c;

        public :

        void add()
        {
            c = a+b;
        }

        void show()
        {
            cout<<"Sum is : "<< c <<endl;
        }
    };

int main ()
{
    B object;
    object.input();
    object.display();
    object.add();
    object.show();

    return 0;
}