//ternary search 
//ternary search divides the array into three parts
//array should be sorted before searching 
//two mids are taken 
//mid1 = l + [r-l]/3 , mid2 = r- [r-l]/3 
//r and l are starting and ending indexes
//compare key(element to be found to mid1 and  mid2 and then work accordingly)
//lets suppose the array to be in increasing order
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int ternary_search(int arr[], int n, int x){
    int start = 0; //l stands for start
    int end = n-1; //r stands for end
    // int mid1 =l+(r-l)/3;
    // int mid2 = r-(r-l)/3;
    while(start<=end){ //jab tak starting index ending index se kam hai tab tak ye loop chalega that means the loop will work for all the indexes
        int mid1 = start+ (end-start)/3;
        int mid2 = end - (end- start)/3;
    if(arr[mid1]==x){
        return 1;
    }
    if(arr[mid2]==x){
        return 1;
    }
    if(arr[mid1>x]) //now we will limit our search to the leftmost part of the array
    {
        start=mid1-1;
    }
    else if(arr[mid2]<x){ //now we will restrict our search to the rigth most part of the array
        end = mid2+1;
    }
    else{
        //when the key is in between mid1 and mid2
        start= mid1+1;
        end= mid2-1;
    }  
    }
    return -1;
}
int main(){
    //take sorted array as input
    int n, x;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int sorted_arr[n];
    for (int i = 0;i<n;i++){
        printf("Enter the %d element of the array : ", i+1);
        scanf("%d", &sorted_arr[i]);
    }
    printf("Enter the element to be found in the input array : ");
    scanf("%d",&x);
    printf("%d\n", ternary_search(sorted_arr, n, x));
    return 0;
}
//similarly for this as one condition enters the loop the at the end mids will change according to the conditions 
//then the loop will be called again with the changed mids
//and the loop will run until the start index is lesser than mid and this is true for all elements of the array

//the time complexity for ternary search is BigOh(log n base 3)
//as the array will get divided into 3 parts each time 
//hence this meansa that the number of steaps taken to get the result are log(n base 3)
//space complexity for ternary srarch is constant that is BigOh(zero) no extra space is required by the program to represent the output.


