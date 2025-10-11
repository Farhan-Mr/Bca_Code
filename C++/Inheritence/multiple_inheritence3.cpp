//  This is third example of multiple inheritence

#include <iostream>
    using namespace std;

// Base class 1 

class num1
{
    protected : int a;

    public :
    void input_a()      // always use public assess specifiers to declear funtion 
    {
        cout << "Enter number a : ";
        cin >> a;
    }
};

// Base class 2
class num2
{
    public : int b;
    void input_b()
    {
        cout << "Enter number b : ";
        cin >> b;
    }
};

// Derived class 

class add : public num1 , public num2
{
    private : int sum;

    public :

    void display ()
    {
        sum = a + b;
        cout << "Addition ot two number is : " << sum << endl;
    }
};


int main ()
{
    add a;

    a.input_a();
    a.input_b();

    a.display();

    return 0;
}    