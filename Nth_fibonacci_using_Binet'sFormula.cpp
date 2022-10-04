//printing nth fibonacci number usin binet's formula
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double phi = (1 + sqrt(5)) / 2;
    cout << (int)(pow(phi, n) / sqrt(5) + 0.5);
    return 0;
}
// this approach takes O(logn) time complexity
