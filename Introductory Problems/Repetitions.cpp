#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
 
	string s;
	cin>>s;
	
	int ans=1;
	int c=1;
	for(int i=1;i<s.size();i++)
	{
		if(s[i]==s[i-1])
		{
			c++;
			ans=max(ans,c);
		}
		else
		{
			c=1;
		}
	}
	
	cout<<ans<<endl;
}
