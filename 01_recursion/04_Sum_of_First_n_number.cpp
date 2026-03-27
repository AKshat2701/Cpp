#include<iostream>
using namespace std;


int gettingSum(int n)
{
    //base case 
    if( n == 0 )
    {
        return 0;
    }

    return n + gettingSum( n - 1) ;

}



int main()
{

    int n ; 

    cout << "Enter the number " << endl;
    cin>> n ; 

    cout<< "Sum is " << gettingSum(n);
    return 0 ;
}