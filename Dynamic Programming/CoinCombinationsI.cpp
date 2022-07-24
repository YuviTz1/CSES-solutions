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
 
    sort(a.begin(), a.end());
 
    vector<int> dp(x + 5);
    dp[0] = 1;
    /*for (int i = 0; i < n; i++)
    {
        dp[a[i]] = 1;
    }*/
 
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - a[j] < 0)
            {
                break;
            }
 
            dp[i] = (dp[i] + dp[i - a[j]]) % 1000000007;
        }
    }
 
    /*for(int i=0;i<dp.size();i++)
    {
        cout<<dp[i]<<" ";
    }*/
    cout<<dp[x]<<endl;
}
