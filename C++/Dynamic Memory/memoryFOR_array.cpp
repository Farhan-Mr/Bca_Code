/* WAP to declear memory for array */

 #include<iostream>
    using namespace std;

    int main ()
    {
        int size = 5;

        int *p = new int[size];  // allocate memory for array of size 5

        p[0] = 15;
        p[1] = 20;
        p[2] = 8;
        p[3] = 1;
        p[4] = 5;

        // print the array 

        for( int i=0; i<size; i++)
        {
            cout<<"Value at index "<<i<<" is "<< p[i]<<endl;
        }

        return 0;
    }