#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define l long  
void findCount(){
    l int n;
    cin>>n;
    string s;
    cin>>s;
    ll  int sum=0;
    ll int arr[n];
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
          sum+=i;
          arr[i]=(n-1-i)-i;
        }
        else{
           sum+=n-i-1;
           arr[i]=i-(n-1-i);
        }
    }
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
       if(arr[i]>0){
         sum+=arr[i];
       }
       cout<<sum<<' ';
    }
    cout<<"\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        findCount();
    }
}  
