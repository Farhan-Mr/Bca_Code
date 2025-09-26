/* WAP to allocate mamory dynamically */

#include <iostream>

using namespace std;

int main ()
{
    cout << "DMA -> dynamically memory allocation \n ";

   int *dma = new int ;
    *dma = 20;
    cout << "DMA is : "<<*dma;
    

    return 0; 
}