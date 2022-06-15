#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n - 1);
    cin >> a[0];
    int x = a[0];
    for (int i = 1; i < n - 1; i++)
    {
        cin >> a[i];
        x = x ^ a[i];
    }

    int y = 1;
    for (int i = 2; i <= n; i++)
    {
        y = y ^ i;
    }

    int z = y ^ x;
    cout << z;
}