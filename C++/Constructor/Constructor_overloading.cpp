/*  
    Constructor Overloading:
    Problem: Create a class Point with private member variables x and y (integers). Implement multiple constructors:
    A default constructor initializing x and y to 0.
    A parameterized constructor taking two integers for x and y.
    A parameterized constructor taking one integer for both x and y.
    Challenge: In main(), create Point objects using each of these constructors and print their coordinates. 
*/

    #include<iostream>
        using namespace std;

        class Point
        {
            private :
            int x , y ;

            public :

            //    Implement multiple constructors:

            //    Default Constructor -
            Point() 
            {
                x = 0;
                y = 0;
            }

            //   Parameterized constructor -
            Point( int a, int b)    // taking two integers for x and y.
            {
                x = a;
                y = b;
            }

            Point( int a )   // taking one integer for both x and y.
            {
                x = a;
                y = a;
            }

            void display()
            {
                cout<<"x is -> "<<x <<" and y is -> "<<y;
            }
        };

        int main ()
        {
            Point P;
            P.display();
            cout<<endl;

            Point P1(50,60);
            P1.display();
            cout<<endl;

            Point P2(70);
            P2.display();
            return 0;
        }