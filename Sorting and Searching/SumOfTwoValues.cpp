#include <bits/stdc++.h>
using namespace std;
 
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    int x;
    cin>>x;
 
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second;
        a[i].first = i;
    }
 
    sort(a.begin(),a.end(),compare);
 
    int l=0,r=n-1;
    int sum=0;
    bool done=false;
    while(l<r)
    {
        sum=a[l].second+a[r].second;
        if(sum>x)
        {
            r--;
        }
        else if(sum<x)
        {
            l++;
        }
        else if(sum==x)
        {
            cout<<a[l].first+1<<" "<<a[r].first+1<<endl;
            done=true;
            break;
        }
    }
 
    if(!done)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
}
