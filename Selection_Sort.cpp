#include<iostream>
#include<algorithm>
using namespace std ;

int selection_sort(int arr[] , int n) 
{
	for(int i=0; i<n-1; i++)
	{
		int minimum = i ;
		
		for(int j=i+1; j<n; j++)
		{
			if(arr[minimum] > arr[j] )
			{
				minimum = j ;
			}
		}
				swap(arr[i] , arr[minimum]) ;    
	}
	
	   return arr[5] ;
}

int main()
{
	int arr[100] = {2,4,5,3,1} ;
	int size = 5 ;
	
	selection_sort(arr , size) ;
	
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" " ;
	}
	
	return 0 ;
}
