#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<set>
#include<string>
#include<stack>
#include<map>
#include<queue>
#include<unordered_map>
#include<iomanip>
#include<iostream>
#include<fstream>
#include<numeric>
using namespace std;
 
void dfs(vector<vector<int>>& adj, vector<bool>& visited, int n, int v)
{
	if (visited[v])
	{
		return;
	}
 
	visited[v] = true;
	for (auto i : adj[v])
	{
		dfs(adj, visited, n, i);
	}
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
 
	int n, m;
	cin >> n >> m;
 
	vector < vector<int>> adj(n+1);
	vector<bool> visited(n + 1, false);
 
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
 
		adj[b].push_back(a);
		adj[a].push_back(b);
	}
 
	int count = 0;
	vector<int> components;
 
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			count++;
			components.push_back(i);
			dfs(adj, visited, n, i);
		}
	}
 
	cout << count - 1 << endl;
	for (int i = 1; i < components.size(); i++)
	{
		cout << components[i] << " " << components[i - 1] << endl;
	}
}
