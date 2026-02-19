#include<iostream>
using namespace std;

class Customer
{
    public: 
        string name ;
        int account_no ;
        int balance ; 


    //default constructor
    Customer()
    {
        name = "Akshat" ; 
        account_no = 5;
        balance = 100;
    }

    //Parameterized constructor 
    Customer(string name , int account_no , int balance)
    {
        this->name = name ;
        this->account_no = account_no ;
        this->balance = balance ;
    }

    Customer (string a , int b )
    {
        name = a ;
        account_no = b ;
        balance = 50
    }

    void display() 
    {
        cout<< name << " " << account_no << " " << balance << endl;
    }
};


int main ()
{   

    //Constructor overloading 
    Customer c1 ;
    Customer c2("Vivek" , 23, 10000);
    Customer c3("MOHIT", 5);

    c1.display();
    c2.display();
    c3.display();

    return 0 ;
}