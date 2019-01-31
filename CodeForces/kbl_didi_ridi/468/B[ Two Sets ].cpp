#include <iostream>
#include <vector>
#include <map>
using namespace std;
const int MAX = 100000 + 10;
vector <int> adj[MAX];
map <int, int> mp;
int p[MAX];
int cnt;
int mrk[MAX];
bool out[MAX];
int Case;
int a, b;

void add_adj(int i, int a)
{
	int pu = a - p[i];
	if (mp.find(pu) != mp.end())
		adj[i].push_back(mp[pu]);
}

void DoA(int v)
{
	mrk[v] = 2;
	out[v] = 0;
	for (int i = 0; i < adj[v].size(); i++)
		if (mrk[adj[v][i]] != 2)
			DoA(adj[v][i]);
}

void DoB(int v)
{
	mrk[v] = 2;
	out[v] = 1;
	for (int i = 0; i < adj[v].size(); i++)
		if (mrk[adj[v][i]] != 2)
			DoB(adj[v][i]);
}

bool DoPath(int v)
{
	mrk[v] = 2;
	if (adj[v].size() == 1)
		if (a - p[adj[v][0]]  == p[v])
		{
			out[v] = 0;
		}
		else
		{
			out[v] = 1;
		}
	for (int i = 0; i < adj[v].size(); i++)
		if (mrk[adj[v][i]] == 1)
			out[v] = DoPath(adj[v][i]);
	return out[v];
}

void dfs(int v)
{
	cnt++;
	mrk[v] = 1;
	for (int i = 0; i < adj[v].size(); i++)
		if (adj[v][i] == v && a - p[v] == p[v])
			Case = 2;
		else if (adj[v][i] == v && b - p[v] == p[v])
			Case = 3;
		else if (mrk[adj[v][i]] == 1 && a - p[adj[v][i]] != p[v] && b - p[adj[v][i]] != p[v])
			Case = 1;
		else if (mrk[adj[v][i]] == 0)
			dfs(adj[v][i]);	
}

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
		mp[p[i]] = i;
	}

	for (int i = 0; i < n; i++)
	{
		add_adj(i, a);
		add_adj(i, b);
	}

	for (int i = 0; i < n; i++)
		if (!mrk[i])
		{
			cnt = 0;
			Case = 0;
			dfs(i);
			if (Case == 1)
				DoA(i);
			else if (Case == 0 && cnt % 2 == 1)
			{
				cout << "NO" << endl;
				return 0;
			}
			else if (Case == 0 && cnt % 2 == 0)
			{
				//cout << "**";
				DoPath(i);
			}
			else if (Case == 2 && cnt % 2 == 1)
				DoA(i);
			else if (Case == 2 && cnt % 2 == 0)
				DoB(i);
			else if (Case == 3 && cnt % 2 == 1)
				DoB(i);
			else 
				DoA(i);
		}
	cout << "YES" << endl;
	for (int i = 0; i < n; i++)
		cout << out[i] << &#39; &#39;;
	cout << endl;
	return 0;
}
