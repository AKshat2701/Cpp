#include<iostream>
using namespace std;

class Student
{
    public:
        string name ;
        int age ;

    Student (string n, int a)
    {
        name = n;
        age = a ;
    }

    //copy constructor 
    Student(const Student &s)
    {
        name = s.name ;
        age = s.age ;
    }

    void display()
    {
        cout<< name << "_" << age << endl;
    }
    
};


int main ()
{
    Student s1("Akshat",21);

    Student s2 = s1 ; 

    s2.display();

    return 0 ;
}