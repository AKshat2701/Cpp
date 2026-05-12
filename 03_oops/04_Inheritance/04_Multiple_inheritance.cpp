#include<iostream>
using namespace std;



class Engineer
{
    public:
    string specilization ;

    Engineer()
    {
        cout<< "HELLO ENGINEER" <<endl ;
    }

    void work()
    {
        cout<< "I have specilization in " << specilization << endl;
    }
};

class Youtuber 
{
    public: 
    int subscriber ;

    Youtuber()
    {
        cout<< "HELLO YOUTUBER " << endl;
    }

    void contentCreator()
    {
        cout<< "I have subscriber base of " << subscriber << endl;
    }
};


class CodeTeacher: public Engineer , public Youtuber
{
    public :
    string name ;

  

    CodeTeacher(string name , string specilization , int subscriber )
    {
        this->name = name ;
        this->specilization = specilization ;
        this->subscriber = subscriber ; 
    }

    void showcase()
    {
        cout<< "My name is " << name << endl;
        work();
        contentCreator();
    }
};

int main ()
{
    CodeTeacher A1("Vijay" , "Computer Science" , 40000);
    A1.showcase();
    return 0 ;
}