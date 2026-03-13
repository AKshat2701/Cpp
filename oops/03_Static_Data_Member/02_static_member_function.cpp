// static member function is a function that belongs to the class instead of the object 

// It can access only static data members of the class.



#include<iostream>
using namespace std;


class Customer {

    string name ;
    int account_number ;
    int balance ;
    
    
    public:
    static int total_customer ;

    Customer(string name , int account_number, int balance)
    {
        this->name = name ;
        this->account_number = account_number;
        this->balance = balance ;
        total_customer++;
    }

    static void accessStatic()
    {
        cout << total_customer << endl;
    }

    void display()
    {
        cout<< total_customer; 
    }


};

int Customer :: total_customer = 0 ;

int main ()
{

    Customer c1("Ajay", 1234, 40000);
    Customer c2("Vijay", 4567, 95900);
    Customer c3("Mohan", 1232 , 99400);

    Customer::accessStatic();

    
    return 0 ;
}