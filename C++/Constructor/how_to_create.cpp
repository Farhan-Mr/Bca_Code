/* WAP to create constructor and acces it */

#include <iostream>
    using namespace std;

    class demo
    {
        private :
            int a,b;

        public :

            demo()  // Constructor  
            {
                a = 1;
                b = 1;
                cout <<"a and b are initialised with 1 ( by using of constructor) "<<endl;
            }

            void input()
            {
                cout <<"Enter 2 number : ";
                cin>>a>>b;
            }

            void display()
            {
                cout <<"a = "<<a<<endl;
                cout <<"b = "<<b<<endl;
            }
    };

    int main ()
    {
        demo D;             // Object of class demo, constructor is called here
        D.display();        // Display initialised value

        return 0;
    }