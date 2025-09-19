
/*  1. Define a base class Person with data members for name and age and a method display(). 
    2. Define a derived class Student that inherits from Person. 
    3. The Student class should have an addional data member for rollNumber and a method 
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
            cout <<endl << "Name is  "<<name << " and age is  "<<age << endl;
        }
    };

    class Student : public Person
    {
        protected :  int  roll_number;
        
        public :
                void input2 ()
                {
                    cout << "Enter roll number : ";
                    cin >> roll_number;
                }

                void Display2 ()
                {
                    cout << "Roll number is "<<roll_number;
                }
            
    };

    int main ()
    {
        Student Stu;
        Stu.input();
        Stu.Display();
        Stu.input2();
        Stu.Display2();


        return 0;
    }
