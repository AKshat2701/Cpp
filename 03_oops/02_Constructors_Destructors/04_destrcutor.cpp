#include<iostream>
using namespace std;


class Customer 
{
    public:
    string name ; 
    int *data ;

   Customer()
   {
    cout<< "Constructor is called" ;
    name = "ROHIT";
    data = new int; 
    *data = 10 ; 
    cout<< "Constructor is called \n" ;
   }

    ~Customer()
    {
        delete data ;
        cout<< "Destructor is called \n" ; 
    }
};


int main ()
{
    Customer A1();


    return 0 ;
}