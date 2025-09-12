/*  Write a C++ program to implement a class called Circle 
    that has private member variables for radius.
    Include member functions to calculate the 
    - circle's area and circumference.*/


    #include<iostream>
        using namespace std;

        class Circle
        {
            private :
            int radius;

            public :

            void area()
            {
                cout<<endl;
                cout<<"Area of Circle :"<<endl;

                cout<<"Enter radius ";
                cin>>radius;

                float area = 3.14 * radius * radius ;

                cout<<"Area of Circle is -> "<<area;
            }

            void circumference ()
            {
                cout<<endl;
                cout<<"Circumference of Circle :"<<endl;
                cout<<"Enter radius ";
                cin>>radius;

                float circum = 2 * 3.14 * radius;

                cout<<"Circumference of Circle is -> "<<circum;
            }


        };

    int main ()
    {
        Circle Area;
        Area.area();

        Circle Circumference;
        Circumference.circumference();

        return 0;
    }    