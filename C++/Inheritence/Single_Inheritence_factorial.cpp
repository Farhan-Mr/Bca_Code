/* Program of Single Inheritence to find factorial of a number 
    and number taken by User */

    #include<iostream>
        using namespace std;

        class Fact
        {
            protected : int n;

            public :

            void input ()
            {
                cout <<"Enter Number for Factorial : ";
                cin>>n;
            }
            void show ()
            {
                cout << "Number is = "<< n;
            }
        };

        class facts : public Fact
        {
            protected : int F = 1;

            public :
            void factorial ()
            {
                for (int i=1; i<=n; i++)
                {
                    F *= i;
                }
            }

            void answer ()
            {
                cout << "factorial of "<<n<< " is = " << F;
            }
        };

        int main ()
        {
            cout<<endl;

            facts f;
            f.input();
            f.show();

            cout<<"\n";
            f.factorial();
            f.answer();

            return 0;
        }