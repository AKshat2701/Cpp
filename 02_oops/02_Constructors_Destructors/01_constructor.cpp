#include<iostream>
using namespace std;


class Customer
{
    public :
        string name ;
        int balance ;
        int account_no ; 


    Customer()
    {
        cout<< "Constructor is called \n" << endl; 
    }

    Customer(string name, int account_no , int balance)
    {
        cout<<"SECOND constructor is called " << endl;
        this->name = name ;
        this->account_no = account_no; 
        this->balance =  balance;
        cout<< "Values assinged " << endl;
    }

    void display()
    {
        cout << this->name << " " << this->account_no << " " << this->balance << endl;
    }



};


int main ()
{
    Customer c1("ROHIT", 123123, 10000) ; 



    return 0 ;
}