/* WAP to Enter detail of books like Author name + title and year of published */

#include<iostream>
    using namespace std;

    class Book
    {
        private :
        string title;
        string author;

        public :
        int year;

        void input()
        {
            cout<<"Enter Book Name : ";
            cin>>title;
            cout<<"Enter Author Name : ";
            cin>>author;
            cout<<"Enter Year of Published : ";
            cin>>year;
        }
        void display()
        {
            cout<<"Title -> "<<title<<endl;
            cout<<"Author -> "<<author<<endl;
            cout<<"Year of Published -> "<<year<<endl;
        }
    };

    int main ()
    {
        Book B;
        B.input();
        B.display();

        return 0;
    }