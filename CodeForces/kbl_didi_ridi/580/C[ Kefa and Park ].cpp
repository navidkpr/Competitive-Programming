#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100*1000 + 100;
bool mrk[MAXN];
bool mark[MAXN];
vector <int> edge[MAXN];
int n, m;
int cnt2 = 0;

void dfs(int v, int cnt)
{
	mrk[v] = 1;
	if (mark[v])
		cnt++;
	if (!mark[v])
		cnt = 0;
	if (cnt > m)
		return;
	if (edge[v].size() == 1 && v != 0)
		cnt2++;
	for (int i = 0; i < edge[v].size(); i++)
	{
		int u = edge[v][i];
		if (!mrk[u])
			dfs(u, cnt);
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> mark[i];
	for (int i = 0; i < n - 1; i++)
	{
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		edge[u].push_back(v);
		edge[v].push_back(u);
	}
	dfs(0, 0);
	cout << cnt2 << endl;
	return 0;
}
