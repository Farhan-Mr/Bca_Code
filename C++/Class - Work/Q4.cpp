/* Wap in C++ to demonstrate the use of Constructor and Destructor */

#include<iostream>

    using namespace std ;

    class fact
    {
        private : 
        int F = 1;

        public :

        long long num;
        fact ()
        {
            cout << "Enter number to find factorial : ";
            cin >> num;
        }

        
        void count_Factorial ()
        {
            for (int i=1; i<=num; i++)
            {
                F *=i;
            }
        }

        void display ()
        {
            cout << "Factorial of " << num << " is : " << F <<  endl;
        }
    };

    int main ()
    {
        fact obj;
        obj.count_Factorial();
        obj.display();

        return 0;
    }