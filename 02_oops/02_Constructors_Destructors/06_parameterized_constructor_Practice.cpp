#include<iostream>
using namespace std;

// class Student
// {
//     public: 
//         string name ; 
//         int age ;

//     Student(string n , int a )
//     {
//         name = n ;
//         age = a ;

//     }

//     void display()
//     {
//         cout<< "Name " << name << endl;
//         cout<< "Age " << age << endl;
//     }

// };

// int main ()
// {

//     Student s1("Akshat", 21);
//     s1.name = "Harshit";
//     s1.age = 48;
//     s1.display();

//     return 0; 
// }


// class Car
// {
//     public:
//         string brand ; 
//         int speed ; 

//     Car(string b, int s ) : brand(b), speed(s)
//     {

//     }

    

//     void show()
//     {
//         cout<<"Brand name" << brand << endl;
//         cout<< "Speed " << speed << endl;
//     }



// };

// int main ()
// {
//     Car c1("BMW", 190) ;
//     c1.show();

//     return 0 ;
// }


class Rectangle 
{
    public:
    int length ;
    int breadth ;

    Rectangle (int l, int b)
    {
        length = l ;
        breadth = b ;
    }

    int area()
    {
        return length * breadth;
    }
};


int main()
{
    Rectangle r1(10,4);
    cout<< r1.area();
}