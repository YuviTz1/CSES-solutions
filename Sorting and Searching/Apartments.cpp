#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
 
	int n,m,k;
	cin>>n>>m>>k;
	
	vector<int> a(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	vector<int> b(m);
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	int i=0;
	int j=0;
	int ans=0;
	while(i<n&&j<m)
	{
		if(a[i]-k>b[j])
		{
			j++;
		}
		else if(a[i]+k<b[j])
		{
			i++;
		}
		else
		{
			i++;
			j++;
			ans++;
		}
	}
	
	cout<<ans<<endl;
}
