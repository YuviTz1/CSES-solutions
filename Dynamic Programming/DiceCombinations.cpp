#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
 
    vector<int64_t> a(n+5);
    a[0]=1;
 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i-j<0)
            {
                break;
            }
            a[i]=(a[i]+a[i-j])%(1000000007);
        }
    }
 
    cout<<a[n]<<endl;
    
}
