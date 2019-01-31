#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 20 + 2;
vector < pair <int, int> > edge[MAXN][MAXN];
char arr[MAXN], arr_2[MAXN];
bool mrk[MAXN][MAXN];

void clear(int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
	mrk[i][j] = 0;
}

bool check(int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (!mrk[i][j])
				return 1;
	return 0;
}

void dfs(int x, int y)
{
	mrk[x][y] = 1;
	for (int i = 0; i < edge[x][y].size(); i++)
	{
		pair <int, int> ans = edge[x][y][i];
		if (!mrk[ans.first][ans.second])
			dfs(ans.first, ans.second);
	}
}

int32_t main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < m; i++)
		cin >> arr_2[i];
	for (int i = 0; i < n; i++)
		if (arr[i] == &#39;>&#39;)
			for (int j = 0; j < m - 1; j++)
				edge[i][j].push_back(make_pair(i, j + 1));
		else
			for (int j = 0; j < m - 1; j++)
				edge[i][j + 1].push_back(make_pair(i, j));
	for (int i = 0; i < m; i++)
		if (arr_2[i] == &#39;^&#39;)
			for (int j = 0; j < n - 1; j++)
				edge[j + 1][i].push_back(make_pair(j, i));
		else
			for (int j = 0; j < n - 1; j++)
				edge[j][i].push_back(make_pair(j + 1, i));
	// for (int i = 0; i < n; i++)
	// 	for (int j = 0; j < m; j++)
	// 	{
	// 		cerr << i << &#39; &#39; << j << " ::: ";
	// 		for (int x = 0; x < edge[i][j].size(); x++)
	// 			cerr << edge[i][j][x].first << &#39; &#39; << edge[i][j][x].second << " && ";
	// 	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			clear(n, m);
			dfs(i, j);
			if (check(n, m))
			{
				cerr << i << &#39; &#39; << j << endl;
				cout << "NO" << endl;
				return 0;
			}
		}
	cout << "YES" << endl;
	return 0;
}
