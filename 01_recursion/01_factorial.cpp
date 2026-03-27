// what is a recusion -> 
// bookish -> when a function calls itself directly or indiretly is is known as recursion 

//when the solution for bigger problem is dependent on small or same type of problem , we use recusion 

// Whenever we writing a recursion code we must have these three thing 1-> 
// Base Case (When we have to stop )  
// 2-> Recursive Relation   
// 3-> Processing (optional)



#include<iostream>
using namespace std ;


int factorial(int n)
{
    cout<< "Factorial is called for n " << n << endl;

    //base condition 
    if(n == 1 )
    {
        return 1 ; 
    }

    int smallProblem = factorial(n-1);
    int biggerProblem = n * smallProblem; 

   return biggerProblem ; 
}



int main()
{
    
    int n ; 
    cout << "Enter the value of N" << endl;

    cin>> n ; 

    int ans = factorial(n);

    return 0 ; 
}