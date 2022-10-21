#include<bits/stdc++.h>
#define int int64_t
using namespace std;
 
int32_t main()
{
    int n; 
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int c=1,k=0;
    while (c<n)
    {
        for (int i = 0; i < n-c; i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                k++;
            }
        }
        c++;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"No. of swap = "<<k;
    
    
    return 0;
}