#include<iostream>
using namespace std;

class Student 
{
    public : 
        string name ;
        int age , roll_number;
        string grade ;

};



int main () 
{
    Student s1 ;
    s1.name = "Akshat";
    s1.grade = "A";
    s1.age = 23;

    cout <<"Name " << s1.name << " " << "Grade " << s1.grade << " " << "Age " << s1.age << endl;

    Student s2 ; 
    s2.name = "Ajay";
    s2.grade = "A";
    s2.age = 32; 

    cout <<"Name " << s2.name << " " << "Grade " << s2.grade << " " << "Age " << s2.age << endl;

    return 0 ;
}