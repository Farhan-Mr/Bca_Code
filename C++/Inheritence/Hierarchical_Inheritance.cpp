// program of Hierarchical Inheritance

#include <iostream>
using namespace std;

// Base class 
class Vehicle
{
    public :
    Vehicle()
    {
        cout << "This is Vehicle "<< endl;
    }
};

// Deviced Class 1
class Two_Wheelar : public Vehicle
{
    public :
    Two_Wheelar()
    {
        cout << "This is Bike "<< endl;
    }
};

// Derived class 2 
class Four_wheelar : public Vehicle
{
    public : 
    Four_wheelar()
    {
        cout << "This is Car "<< endl;
    }
};

int main ()
{
    Four_wheelar obj1;
    Two_Wheelar obj2;
    return 0;
}