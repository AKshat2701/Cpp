// A static data member is a class variable that is shared by all objects of the class instead of each object having its own copy.
// Normally, every object has its own variables.
// But static members belong to the class itself, not to individual objects.

#include<iostream>
using namespace std;

class Customer {

    string name ;
    int account_number ;
    int balance ;
    
    
    public:
    static int total_count ;

    Customer(string name , int account_number , int balance)
    {
        this->name = name ;
        this->account_number = account_number;
        this->balance = balance ;
        total_count++;
    }

    void display()
    {
        cout<< name << " " << account_number << " " << balance << "\n" << endl;
    }

    void count()
    {
        cout<< total_count; 
    }
};


int Customer :: total_count = 0 ;


int main ()
{
    Customer c1("Ankit", 1234, 9000);
    Customer c2("Abhinav", 5678, 9800);

    c2.display();
    c2.count();

}