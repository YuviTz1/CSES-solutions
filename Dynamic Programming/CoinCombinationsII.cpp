#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
    int x;
    cin>>x;
 
    vector<int> a(n);
 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    vector<vector<int>> dp(n+5,vector<int>(x));
 
    for(int i=0;i<n;i++)
    {
        dp[i][0]=1;
    }
 
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=x;j++)
        {
            int x=0,y=0;
            if(j-a[i]<0)
            {
                //dp[i][j]=   dp[i-1][j]+0;
                y=0;
            }
            else{
                y=dp[i][j-a[i]];
            }
            if(i==0)
            {
                //dp[i][j]=   0+dp[i][j-a[i]];
                x=0;
            }
            else{
                x=dp[i-1][j];
            }
            
            dp[i][j]=(x+y)%1000000007;
        }
    }
 
    cout<<dp[n-1][x]<<endl;
}
