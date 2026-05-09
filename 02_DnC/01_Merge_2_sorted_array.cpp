#include<iostream>
using namespace std;

void merge(int* arr, int start, int end)
{
    int mid = (start + end) / 2 ; 

    int len1 = mid - start + 1 ;
    int len2 = end - mid ;

    //assume to create arrays for len1 , and len2 length ;
    int* left = new int[len1]; 
    int* right = new int[len2];

    //left side ki value copy karlo 
    int k = start ;
    for(int i = 0 ; i < len1; i++)
    {
        left[i] = arr[k];
        k++ ; 
    }

    //Right side ki value copy karlo
    k = mid + 1 ; 
    for(int i = 0 ; i < len2 ; i++)
    {
        right[i] = arr[k] ; 
        k++ ; 
    }

    
}

void mergeSort(int* arr, int start, int end)
{
    //base case
    if(start >= end)
    {
        return ; 
    }

    int mid = (start + end) / 2 ;



    mergeSort(arr, start , mid) ; 
    mergeSort(arr, mid + 1 , end) ; 

    //now merging left and right part 
    merge(arr, start, end) ;
}


int main() 
{

    int arr[] = {32,4,95,39,2,48,58,6};

    int n = 8 ; 

    int start = 0 ; 

    int end = n - 1 ; 

    mergeSort(arr, start, end) ; 


    return 0 ; 

}