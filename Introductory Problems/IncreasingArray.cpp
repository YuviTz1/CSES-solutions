#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int64_t ans=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[i-1])
		{
			int d=a[i-1]-a[i];
			a[i]+=d;
			ans+=d;
		}
	}
	
	cout<<ans<<endl;
}
