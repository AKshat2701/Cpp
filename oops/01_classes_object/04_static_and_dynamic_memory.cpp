#include<iostream>
using namespace std;

class Student 
{

    public:
        string name ;
        int age , roll_number ; 
        string grade ; 

};


int main () 
{
    Student *s = new Student ; 
    s->age = 32;
    s->name = "MOHIT";
    s->roll_number = 63;
    s->grade = "A";


    // (*s).age = 43;
    // (*s).roll_number = 43;
    // (*s).name = "Akshat Srivastava";
    // (*s).grade = "B";


    cout<< s->name <<endl;

    return 0 ;
}