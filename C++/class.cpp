/* WAP to create a class for student and display it details and input their name and roll no.  */

#include<iostream>
using namespace std;

class student
{
    private :
    string name ;
    int roll ;
    
    public :
    void input()
    {
        cout<<endl;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter Roll no. : ";
        cin>>roll;
    }
    void display()
    {
        cout<<endl;
        cout<<"User name : "<<name;
        cout<<endl;
        cout<<"user roll-no : "<<roll;
    }
};

int main ()
{
    student s1,s2;
    s1.input();
    s2.input();

    s1.display();
    s2.display();


    return 0;
}