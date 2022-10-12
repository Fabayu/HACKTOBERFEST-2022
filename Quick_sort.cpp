#include <iostream>
#include <algorithm>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;

   // It will count ki pivot se bade kitne element hai 
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot to the right posistion
    int pivotIndex = count + s;
    swap(arr[pivotIndex], arr[s]);

    // left & right wla paer

    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivot)
        {
            i++;
        }

        while(arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]) ;
        }
    }

    return pivotIndex;
}

void quick_sort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    // for left side .
    quick_sort(arr, s, p - 1) ;

    // for right side
    quick_sort(arr, p + 1, e);
}

int main()
{
    int arr[] = {8, 3, 5, 2, 0} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    cout << n << endl;

    cout << "Array before quick sort : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    quick_sort(arr, 0, n - 1) ; 

    cout << endl ;
    cout << "Array after quick sort : " ;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}