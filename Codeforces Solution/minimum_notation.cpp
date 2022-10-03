// Problem Link - https://codeforces.com/problemset/problem/1730/C

#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long int
#define INF 1e9

void solve()
{
    string s;
    cin >> s;
    map<int, int> mp;
    for (auto &digit : s)
        mp[digit - '0']++;

    int n = s.length();
    // string ans = "";
    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto &digit : s)
    {
        if (digit - '0' == mp.begin()->first)
        {
            while (!pq.empty() && pq.top() <= digit - '0')
                cout << pq.top(), pq.pop();
            cout << digit;
        }
        else
        {
            pq.push(min(digit - '0' + 1, 9));
        }
        mp[digit - '0']--;
        if (mp[digit - '0'] == 0)
            mp.erase(digit - '0');
    }
    while (!pq.empty())
        cout << pq.top(), pq.pop();
    cout << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        solve();
    }
}