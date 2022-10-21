#include <bits/stdc++.h>
using namespace std;

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    cout << "\n";
}
void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    // If element are left in any half
    // So including all the sorted subarray in new Array
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }
    for (int i = low; i <=high; i++)
    {
        A[i]=B[i];
    }
    
}
void Merge_sort(int A[],int low, int high)
{
    int mid;
    if(low< high)
    {
        mid=(low+high)/2;
        Merge_sort(A,low,mid);
        Merge_sort(A,mid+1,high);
        merge(A,mid,low, high);
    }

}
int main()
{
    int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    // 3, 5, 2, 13, 12, 3, 2, 13, 45
    // 3, 2, 2, 13i, 12, 3j, 5, 13, 45
    // 3, 2, 2, 3j, 12i, 13, 5, 13, 45 --> first call to partition returns 3
    int n = 9;

    printArray(A, n);
    Merge_sort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}
