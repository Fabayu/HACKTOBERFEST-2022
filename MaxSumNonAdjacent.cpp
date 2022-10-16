#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> &arr, int index,vector<int>& dp){
    if(index>=arr.size()){
        return 0;
    }
    if(dp[index]!=-1){
        return dp[index];
    }
    int inc=arr[index] + solve (arr,index+2,dp);
    int exc= 0 + solve(arr,index+1,dp);
    return dp[index]=max(inc,exc);
}
int solve2(vector<int> arr){
    vector<int> dp(arr.size()+2,0);
    int n= arr.size();
   for(int i=n-1;i>=0;i--){
    int inc=arr[i] + dp[i+2];
    int exc= 0 + dp[i+1];
    dp[i]=max(inc,exc);
   }
   return dp[0];
    
}
int solve3(vector<int> arr){
  int next1=0;
  int next2=0;
  int curr;
    int n= arr.size();
   for(int i=n-1;i>=0;i--){
    int inc=arr[i] + next2;
    int exc= 0 + next1;
    curr=max(inc,exc);
  next2=next1;
  next1=curr;
   }
   return curr;
    
}
int main(){
   
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(9);
 //vector<int> dp(arr.size(),-1);
   cout<< solve2(arr);
}