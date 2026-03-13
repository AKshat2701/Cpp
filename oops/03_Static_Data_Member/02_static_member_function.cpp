// static member function is a function that belongs to the class instead of the object 

// It can access only static data members of the class.



#include<iostream>
using namespace std;


class Customer {

    string name ;
    int account_number ;
    int balance ;
    static int total_customer ;
    static int total_balance ; 
    
    
    public:

    Customer(string name , int account_number, int balance)
    {
        this->name = name ;
        this->account_number = account_number;
        this->balance = balance ;
        total_customer++;
        total_balance += balance ;
    }

    static void accessStatic()
    {
        cout <<"Total number of customers : " << total_customer << endl;
        cout << "Total balance : "<<total_balance << endl;
    }

    void deposit(int amount)
    {
        if(amount > 0)
        {
            balance += amount;
            total_balance +=  amount;
        }
    }

    void withdrawal(int amount)
    {
        if(amount <= balance && amount >0)
        {
            balance -= amount;
            total_balance -= amount; 
        }
    }

    void display()
    {
        cout<< total_customer; 
    }


};

int Customer :: total_customer = 0 ;
int Customer :: total_balance = 0 ;

int main ()
{

    Customer c1("Ajay", 1234, 40000);
    Customer c2("Vijay", 4567, 95900);
    Customer c3("Mohan", 1232 , 99400);

    Customer::accessStatic();



    return 0 ;
}