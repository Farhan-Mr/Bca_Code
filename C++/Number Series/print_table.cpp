/*WAP to print table and input taken by user */

#include<iostream>
    using namespace std;

    class Table
    {
        private :
        int num;

        public :
        // input function
        void input ()
        {
            cout<<"Enter no to print table : ";
            cin>>num;
        }
        // Tbale function
        void table()
        {
            cout<<"Table of "<<num<<endl;

            for (int i=1; i<=10; i++)
            {
                cout<<num<<" * "<<i<<" = "<<num * i << endl;
            }
        }
    };

    int main()
    {
        Table t;
        t.input();
        t.table();

        return 0;
    }