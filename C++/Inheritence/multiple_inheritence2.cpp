// Multiple Inheritance Program 

#include <iostream>
    using namespace std;

    class cycle
    {
        public :        
        cycle()
        {
            cout << " Cycle " << endl;
        }
    };

    class car 
    {
        protected : 
        car()
        {
            cout << " Car " << endl;
        }
    };

    class vehicle : public cycle, public  car 
    {
        public :
            void show ()
            {
                cout << " These are Vehicles - " << endl;
            }
    };

    int main ()
    {
        vehicle v;
        v.show();
        return 0;
    }