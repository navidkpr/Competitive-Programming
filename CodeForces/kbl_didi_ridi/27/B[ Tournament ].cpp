#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 50 + 10;
vector <int> edge[MAXN];
bool mark[MAXN][MAXN];
bool mrk[MAXN];

void dfs(int v)
{
	mrk[v] = 1;
	for (int i = 0; i < edge[v].size(); i++)
		if (!mrk[edge[v][i]])
			dfs(edge[v][i]);
}

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n * (n - 1) / 2 - 1; i++)
	{
		int x, y;
		cin >> x >> y;
		x--; y--;
		mark[x][y] = mark[y][x] = 1;
		edge[x].push_back(y);
	}
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << i << " :: ";
	// 	for (int j = 0; j < edge[i].size(); j++)
	// 		cerr << edge[i][j] << &#39; &#39;;
	// 	cerr << endl;
	// }
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (!mark[i][j] && i != j)
			{
				dfs(i);
				for (int k = 0; k < n; k++)
					cerr << mrk[k] << &#39; &#39;;
				cerr << endl;
				if (!mrk[j])
					cout << j + 1 << &#39; &#39; << i + 1 << endl;
				else
					cout << i + 1 << &#39; &#39; << j + 1 << endl;
				return 0;
			}
}
