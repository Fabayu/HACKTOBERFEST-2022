#include<iostream>
using namespace std ;

int bubble_sort(int arr[] , int n)
{
	for(int i=1; i<n; i++)
	{
		bool swapped = false ;
		
		for(int j=0; j<n-i; j++ )
	     {
	     	if(arr[j] > arr[j+1])
	     	{
	     	   swap(arr[j] , arr[j+1])	;
	     	   swapped = true ;
			}
		 }
		 
		 if(swapped = false)
		 {
		 	break ;
		 }
	}
	return arr[5] ;
}

int main()
{
	int arr[50] = { 4,3,2,1 } ;
	int size = 4 ;
	
	bubble_sort(arr , size) ;
	
	for(int i=0; i<4; i++)
	{
		cout<<arr[i]<<" " ;
	}
	
	return 0 ;
}

/* *******************************  ALGOTRITM  ***************************************

(1) i number of round ko denote kae raha hai .
(2) j hone wale swaps ko denote kara .
(3) n-i us baat ko denote kar ki jese last wala right place per fix ho jayega ho jayega 
    to hum agale baar humko us index per ni jana hai .
(4) agar agala wala , bada hoga to he pichla wala swap karega .
(5) agar aik bhi swap ni ho re matlab array already sorted hai , to break maar denge taki
    TIME COMPLEXITY accchi rahegi .
    
*/

