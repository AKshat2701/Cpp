#include<iostream>
using namespace std;

class Customer
{
    string name ; 
    int acc_no , balance ;
    static int total_customer ;

    public:
    Customer(string name, int acc_no, int balance )
    {
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance; 
        total_customer++;
    }

    void display()
    {
        cout<< name << " " << acc_no << " " << total_customer << endl;
    }
    void display_TotalCustomer()
    {
        cout<< total_customer << endl;
    }
};

int Customer :: total_customer = 0;

int main()
{

    
    Customer a1("Rohit", 1, 1000);
    Customer a2("Mohit", 2, 1800);

    a1.display();
    a2.display();

    Customer a3("Mohan", 3 ,3999);
    a3.display();

    a2.display_TotalCustomer();

    return 0 ;
}