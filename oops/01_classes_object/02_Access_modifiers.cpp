#include<iostream>
using namespace std;

class Student 
{
    private :
        int age ; 
        string name ; 
        string grade ;

    public:
        void setName(string s)
        {
            if(s.size() == 0 )
            {
                cout<< "Invalid name " ;
                return ;
            }
            name = s ;
        }

        void setAge(int a)
        {
            if ( age < 0 && age > 100)
            {
                cout<< "Invalid age" ;
                return ;
            }
            age = a ;
        }

        void setGrade(string g)
        {
            grade = g ;
        }

        void getName()
        {
            cout<<name<< endl;
        }

        string getGrade(int pin )
        {
            if(pin == 123)
            {
                cout<< grade << endl;
            }
            return " ";
            
        }

        void getAge()
        {
            cout<< age << endl;
        }

};


int main ()
{   

    Student s1 ; 
    s1.setName("");
    s1.setName("Akshat");
    s1.setAge(20);
    s1.setGrade("A+");

    s1.getAge();
    s1.getName();
    s1.getGrade(123);


    return  0 ;
}