#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int64_t n;
    cin>>n;
 
    vector<int64_t> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    vector<int64_t> prefix(n,0);
    prefix[0]=a[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+a[i];
    }
 
    int64_t count=0;
    map<int64_t,int64_t> m;
    m[0]=1;
    for(int i=0;i<n;i++)
    {
        if(m.count((prefix[i]%n+n)%n))
        {
            count=count+m[(prefix[i]%n+n)%n];
        }
 
        m[(prefix[i]%n+n)%n]++;
    }
 
    cout<<count<<endl;
}
