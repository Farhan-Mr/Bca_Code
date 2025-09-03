/* WAP to find factorial and take input from user */

#include<iostream>
    using namespace std;

    class factorial
    {
    private:
        int n,f = 1;

        public :
        void input ()
        {
            cout<<"Enter number to find its factorail : ";
            cin>>n;
        }
        void fact()
        {
            for (int i=1; i<=n; i++)
            {
                f *= i;
            }
        }
        void display()
        {
            cout<<"Factorial of "<<n<<" is "<< f <<endl;
        }
        

    };

    int main ()
    {
        factorial F;
        F.input();
        F.fact();
        F.display();

        return 0;
    }