#include<iostream>
using namespace std;

int partition(int arr[] , int start, int end)
{
    //step1 : Choose pivotElement 
    int pivotIndex =  start ; 
    int pivotElement = arr[start] ; 

    //step2 : Find right position for pivot element and place it there 

    int count = 0 ; 
    for(int i = start + 1 ; i <= end ; i++)
    {
        if(arr[i] <= pivotElement)
        {
            count++ ;
        }
    }

    //jab mai loop se bahar aya , to mere pas pivot ki right position ready hai 
    int rightIndex = start + count ; 
    swap(arr[pivotIndex] , arr[rightIndex]) ; 
    pivotIndex = rightIndex; 


    //step 3 :  left me chote aur right me bade element
    int i = start ; 
    int j = end ; 

    while( i < pivotIndex  && j > pivotIndex)
    {
        while(arr[i] < pivotElement)
        {
            i++ ; 
        }
        while(arr[j] > pivotElement)
        {
            j-- ; 
        }

        //2 case ho sakte hai -> 
        //A-> You found tthe elements to swap 
        //B-> No need to swap 

        if(i < pivotIndex && j > pivotIndex)
        {
             swap(arr[i] , arr[j]);
        }
    }

    return pivotIndex ; 

}


void quickSort(int arr[], int start, int end)
{
    if(start >= end)
    {
        return  ; 
    }


    //partition logic -> return PivotIndex 
    int p = partition(arr, start, end) ; 

    //recursive logic

    // Pivot element ke left -> call 
    quickSort(arr, start, p - 1 ) ; 


    // Pivot element ke right -> call 
    quickSort(arr, p + 1 , end) ; 

}

int main()
{   
    int arr[] = {8,1,3,4,20,50,30} ; 
    int n = 7 ; 

    int start = 0 ; 
    int end = n - 1 ; 

    quickSort(arr, start, end) ; 

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ; 
    }
    cout << endl ; 



    return 0 ; 
}