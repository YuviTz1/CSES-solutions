#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, x;
    cin >> n >> x;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    vector<int64_t> prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
 
    int ans = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (prefix[i] > x)
        {
            while (j < i)
            {
                int p = prefix[i] - prefix[j];
                if (p == x)
                {
                    ans++;
                    break;
                }
                else if (p < x)
                {
                    break;
                }
                j++;
            }
        }
        else if (prefix[i] == x)
        {
            ans++;
        }
    }
 
    cout<<ans<<endl;
}
