
/*  1. Define a base class Person with data members for name and age and a method display(). 
    2. Define a derived class Student that inherits from Person. 
    3. The Student class should have an addi onal data member for rollNumber and a method 
        displayStudent() that calls the display() method of the base class and also prints the rollNumber. 
    4. In the main() func on, create an object of the Student class and demonstrate its funconality. 
*/

#include<iostream>
    using namespace std;

    class Person
    {
        public :
        string name;
        int age ;

        void input()
        {
            cout << "Enter name : ";
            cin >> name;

            cout << "Enter age : ";
            cin >> age;
        }

        void Display ()
        {
            cout <<endl << "Name is : "<<name << " and age is : "<<age;
        }
    };

    int main ()
    {
        Person P;
        P.input();
        P.Display();

        return 0;
    }
