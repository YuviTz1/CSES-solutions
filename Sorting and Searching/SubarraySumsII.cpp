#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int64_t n,sum;
    cin>>n>>sum;
    vector<int64_t>v(n);
    for(int i=0;i<n;++i)
    	cin>>v[i];
    int64_t m=0,cnt=0;
    map<int64_t,int64_t>mp;
    for(int i=0;i<n;++i)
    {
    	m+=v[i];
    	if(m==sum)cnt++;
    	if(mp.count(m-sum))
    	{
    		cnt+=mp[m-sum];
		}
		mp[m]++;
	}
	cout<<cnt<<endl;
}
