#include<iostream>
using namespace std;


class Customer 
{
    public:
        string name ;
        int acc_no ;
        int balance ;

    Customer (string a , int b, int c)
    {
        
    }

    Customer(Customer &b)
    {
        name = b.name;
        acc_no = b.acc_no;
        balance = b.balance ; 
    }
};

int main ()
{

    Customer A1("Rohit", 123, 10000);
    Customer A2(A1);


    return 0 ;
}