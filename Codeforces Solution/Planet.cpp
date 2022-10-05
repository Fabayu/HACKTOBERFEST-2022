#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,c;
        cin >> n >> c;
        int a[n];
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int ans = 0;
        for(auto it:mp)
        {
            ans=ans+min(it.second,c);
        }
        cout << ans << endl;
    }
}
