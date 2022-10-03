//lambda function in c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2,b=3;
    auto sum=[&a](int b){return a+b;}; //capture by reference in lambda function
    cout<<sum(3);
    return 0;
}
