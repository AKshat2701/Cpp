#include<iostream>
using namespace std;


void printCounting(int n)
{
    // base condition
    if ( n == 0 )
    {
        return ; 
    }

    cout << n << endl;

    printCounting(n - 1 ) ;
}


int main()
{

    int n ; 
    cout << "Enter the number from you want reverse counting" << endl;
    
    cin>> n ;

    printCounting(n) ;

    return 0 ;
}