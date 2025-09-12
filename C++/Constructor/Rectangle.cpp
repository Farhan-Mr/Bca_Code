/*  Write a C++ program to create a class called Rectangle 
    that has private member variables for length and width. 
    Implement member functions to calculate the  - > rectangle's area and perimeter 
*/

    #include <iostream>
        using namespace std;

        class Rectangle
        {
            private :
            int length, width;

            public :
            
            void Area()
            {
                cout<<endl;
                cout<<"Enter Length and Width to find Area of Rectangle "<<"\n";

                cout<<"Enter Length : ";
                cin>>length;
                cout<<"Enter Width : ";
                cin>>width;

                cout<<"Area is : "<< length*width;
            }

            void Perimeter ()
            {
                cout<<endl;
                cout<<"Enter Length and Width to find Perimeter of Rectangle "<<"\n";

                cout<<"Enter Length : ";
                cin>>length;
                cout<<"Enter Width : ";
                cin>>width;

                cout<<"Perimeter is : "<< 2*(length+width);

            }
        };

    int main ()
    {

        cout<<"-- RECTANGLE --";
        
        Rectangle area;
        area.Area();

        Rectangle peri;
        peri.Perimeter();


        return 0;
    }