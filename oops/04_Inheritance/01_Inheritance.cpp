// #include<iostream>
// using namespace std;


// class Human
// {
//     private :
//         int a ;

//     protected :
//         int b ;

//     public: 
//         int c ;


//     void func()
//     {
//         a = 12 ;
//         b = 20 ; 
//         c = 30 ;
//     }
// };



// int main () 
// {

//     Human Rohit;
//     Rohit.c ;


//     Rohit.func();
    



//     return 0 ;
// }



#include<iostream>
using namespace std;



class Human
{   
    string Religion , color ;
    protected :
    string name ; 
    int age , weight ;

};


class Student: public Human
{
    private :
    int roll_number , fees ;

    public : 

    Student(string name , int age , int weight , int roll_number,int fees)
    {
        this-> name  = name ;
        this-> age = age ;
        this->weight = weight ;
        this->roll_number = roll_number; 
        this->fees = fees; 
    }

  
};


int main ()
{

    Student A("Rohit", 12,43,63, 7000);
    



    return 0 ;
}