#include <iostream>
using namespace std;

int insertion_sort(int *arr , int n)
{
    for(int i=1; i<n; i++) 
    {
        int temp = arr[i] ;
 
        int j = i - 1 ;

        while(j>=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j] ;
            j -- ;
        }
        
        arr[j+1] = temp ; 
    } 

    return *arr ;
}

int main()
{
    int arr[] = {8,4,1,5,9,2} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;

    // print the unsorted array
    cout << "unsorted array : " ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // calling the function .
    insertion_sort(arr, n) ;

    cout << endl ;

    // print the sorted array
    cout << "sorted array : ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " " ;
    }
}