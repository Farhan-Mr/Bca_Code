#include <iostream>
   using namespace std;

   class Bankaccount
   {
    private :
        int balance; // Use to hide data (account balance)

        public :

        void setBalance (int x)
        {
            if(balance >= 0)
            {
                balance = x;
            }
        }

        int getBalance()
        {
            return balance;
        }
   };

   int main()
   {
        Bankaccount B;

        B.setBalance(4000);

        cout<<"Balance is = ";
        cout<< B.getBalance();

        return 0;
   }