#include<iostream>
    using namespace std;

    class Book
    {
        public :
        string title;
        string author;

        Book()
        {
            title = "Unknown";
            author = "Anonymous"; 
        }

        Book(string x, string y)
        {
            title = x;
            author = y;
        }

        Book(const Book &B1)
        {
            title = B1.title; 
            author = B1.author; 
        }

        void display()
        {
            cout<<"Title : "<<title<<endl;
            cout<<"Author : "<<author<<endl;
        }
    };

    int main()
    {
        Book B1;        //default constructor
        B1.display();
        cout<<"This is Book B1"<<endl<<endl;


        Book B2("C++","farhan");    //parameterized constructor
        B2.display();
        cout<<"This is Book B2"<<endl<<endl;


        cout<<"This is Book B3"<<endl<<endl;        //copy constructor method 1 to copy the data
        cout<<"copy the data of B2 to B3"<<endl;
        Book B3 = B2;
        B3.display();


        cout<<"This is Book B4"<<endl<<endl;        //copy constructor method 2 to copy the data
        Book B4(B3); 
        cout<<"copy the data of B3 to B4"<<endl;
        B4.display();
        return 0;
    }