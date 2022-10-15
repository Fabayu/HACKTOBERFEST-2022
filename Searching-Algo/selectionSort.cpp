#include<bits/stdc++.h>
using namespace std;
 

void Selection_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int indexOfMin=i;
        for (int j = i+1; j <n ; j++)
        {
            if (arr[j]<arr[indexOfMin])
            {
                indexOfMin=j;
            }   
        }
        int temp=arr[i];
        arr[i]=arr[indexOfMin];
        arr[indexOfMin]=temp;
        
    }   
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Selection_sort(arr,n);
    printArray(arr,n);

    
    return 0;
}