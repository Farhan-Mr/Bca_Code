#include <iostream> 
using namespace std; 
 
// Define a namespace 
namespace First  
{ 
    void show()  
   { 
    cout << "This is First namespace." << endl; 
    } 
} 
// Another namespace with same function name 
namespace Second  
{ 
    void show()  
   { 
               cout << "This is Second namespace." << endl; 
    } 
} 
int main()  
{ 
     
// Calling function from First namespace 
First::show();    
 
// Calling function from Second namespace 
Second::show();       
 
return 0; 
 
} 