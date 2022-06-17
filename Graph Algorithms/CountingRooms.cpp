#include<bits/stdc++.h>
using namespace std;
 
bool possible(int n, int m, int x, int y)
{
	return (x < n&& x >= 0 && y < m&& y >= 0);
}
 
void dfs(vector<vector<int>>& visited, int n, int m, int i, int j)
{
	int dx[] = { 0,0,1,-1 };
	int dy[] = { 1,-1,0,0 };
 
	if (!possible(n, m, i, j))
	{
		return;
	}
 
	if (visited[i][j] == 1)
	{
		return;
	}
 
	visited[i][j] = 1;
 
	for (int k = 0; k < 4; k++)
	{
		int x = i + dx[k];
		int y = j + dy[k];
		dfs(visited, n, m, x, y);
	}
}
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
 
	int n, m;
	cin >> n >> m;
 
	vector<string> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
 
	vector<vector<int>> visited(n);
 
	for (int i = 0; i < n; i++)
	{
		visited[i] = vector<int>(m);
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == '#')
			{
				visited[i][j] = 1;
			}
			else
			{
				visited[i][j] = 0;
			}
		}
	}
 
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (visited[i][j] == 0)
			{
				ans++;
				dfs(visited, n, m, i, j);
			}
		}
	}
 
	cout << ans << endl;
}
