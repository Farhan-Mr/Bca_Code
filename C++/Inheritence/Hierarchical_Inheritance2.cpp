/* Program of Hierarchical Inheritance*/

#include <iostream>
using namespace std;

//  Base Class 
class number
{
    public :
    int a, b,sum,sub,mul;

    void input()
    {
        cout << "Enter 1st number : ";
        cin >> a >> b;
        // cout << "Enter 2nd number : ";
        // cin >> b ;
    }

    void display()
    {
        cout << "1st number is : "<< a << endl;
        cout << "2nd number is : "<< b << endl;
    }
};

class addition : public number 
{
    public :
    void add ()
    {
        sum = a+b;
        cout << "Addition is : " << sum << endl;
    }
};

class subtraction : public number
{
    public : 
    void minus()
    {
        sub = a-b;
        cout << "subtraction is : " << sub << endl;
    }
};

class multiplication : public number 
{
    public :
    void multiply ()
    {
        mul = a*b;
        cout << "Multiplication is : " << mul << endl;
    }
};


//  Main function -
int main ()
{
    addition ad;
    ad.input();
    ad.display();
    ad.add();

    subtraction su;
    su.input();
    su.display();
    su.minus();

    multiplication mu;
    mu.input();
    mu.display();
    mu.multiply();

    return 0;
}
