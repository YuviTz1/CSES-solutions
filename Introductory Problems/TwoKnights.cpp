#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int64_t n;
    cin >> n;
 
    for (int64_t i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << i*i * (i*i - 1) / 2 - 4 * (i - 1) * (i - 2) << "\n";
        }
    }
}
