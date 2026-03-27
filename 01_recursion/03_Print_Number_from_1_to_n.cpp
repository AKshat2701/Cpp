//Recursion first builds the call stack, then executes during stack unwinding 

#include<iostream>
using namespace std;


void printing(int n)
{
    //Base condition
    if ( n == 0 )
    {
        return ; 
    }
    
    //recursive call
    cout << n << " " ;
    printing(n-1) ;
     
}


int main()
{

    int n  ;
    
    cout<< "Enter the final number " << endl;
    cin>> n; 

    printing(n) ; 


    return 0 ;
}