#include<iostream>
using namespace std;

class addition 
{
    private :
    int a;

    protected :
    int b;

    public :
    int c;

    void input()
    {
        // cout<<"Enter 1st number for sum : ";
        // cin>>a;
        // cout<<"Enter 2nd number for sum : ";
        // cin>>b;
        cout<<"Enter 2 no. do sum : ";
        cin>>a>>b;
    }
    void sum()
    {
        c = a+b;
    }
    void display()
    {
        cout<<"a is "<<a<<" and b is "<<b<<endl;
        cout<<"sum is : "<<c<<endl;
    }
};

int main()
{
    addition a1,a2;

    a1.input();
    a1.sum();
    a1.display();

    // public and protected can not access directly outside the class -

    // cout<<"2nd sum is : ";   // give error
    // a2.a = 15;               // give error 
    // a2.b = 12; 
    // a2.sum(); 
    // a2.display(); 

    return 0;
}