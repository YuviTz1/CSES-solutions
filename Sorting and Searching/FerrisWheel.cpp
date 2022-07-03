#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int64_t n, x;
    cin >> n >> x;
 
    vector<int64_t> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    int ans = n;
    while (i < j)
    {
        if (a[i] + a[j] <= x)
        {
            ans--;
            i++;
            j--;
        }
        else
        {
            j--;
        }
    }
    cout<<ans<<endl;
}
