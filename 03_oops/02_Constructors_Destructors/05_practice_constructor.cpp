#include<iostream>
using namespace std;

// Q-1
// class Book{

//     public:
//         string title ;
//         int price ; 

//     Book()
//     {
//         title = "Unknown";
//         price = 0 ;
//     }

//     void display()
//     {
//         cout << "Book title is : " << title << endl;
//         cout<< "Price is : " << price << endl;
//     }

// };


// int main ()
// {
//     Book b1 ; 
//     b1.display();
//     b1.price = 890;
//     b1.title = "The long way to do easy things" ;
//     b1.display();

//     return 0 ;
// }



// Q-2
// class Mobile
// {
//     public:
//         string name ;
//         int battery ;

//     Mobile()
//     {
//         name = "samsung";
//         battery = 4000;
//     }

//     void details()
//     {
//         cout<< "name is : "<< name << endl;
//         cout<< "battery is : "<< battery << endl;
//     }
// };


// int main ()
// {

//     Mobile m1;
//     m1.details();


//     return 0 ;
// }



// Q-3
// class Employees
// {
//     public:
//         string name ;
//         int salary ;
//         int bonus ; 


//     Employees()
//     {
//         name = "Not assigned ";
//         salary = 0;
//         bonus = 1000 ;
//     }

//     void details()
//     {
//         cout<< "Name is : " << name << endl;
//         cout<< "salary is : " << salary << endl;
//         cout<< "bonus is : " << bonus << endl;
//     }
// };

// int main ()
// {

//     Employees emp1 ; 
//     emp1.name = "Ajay";
//     emp1.salary = 10000;
//     emp1.bonus = 2300;

//     emp1.details();
//     return 0 ;
// }


// Q-4
// class Car 
// {

//     public:
//         string name ;
//         int fuel ;

//     Car()
//     {
//         cout<<"Constrcutor is called " << endl;
//         name = "Jeep";
//         fuel = 59 ; 
//     }

//     void checkFuel()
//     {
//         cout<< "Brand : " << name << endl;
//         if (fuel < 50)
//         {
//             cout<< "Refuel Soon" << endl;
//         }
//         else 
//         {
//             cout<< "Fuel OKAY" << endl;
//         }
//     }
// };

// int main ()
// {
//     Car c1 ; 
//     return 0 ;  
// }


// Q-5
// class Student 
// {
//     public:
//         string name ;
//         int marks ; 


//     Student ()
//     {
//         name = "Unknown";
//         marks = 0 ; 
//     }

//     void display()
//     {
//         if (marks < 40)
//         {
//             cout<< marks << " Fail, need to reattemp examination" << endl;
//         } else 
//         {
//             cout<< marks << " pass " << endl;
//         }
//     }
// };

// int main()
// {   
//     Student s1 ;
//     s1.name = "Akshat";
//     s1.marks = 94;
//     s1.display();
//     return 0 ;
// }