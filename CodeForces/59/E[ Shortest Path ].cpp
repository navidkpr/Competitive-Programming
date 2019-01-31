#include <iostream>
#include <set>
#include <vector>
#include <queue>

using namespace std;

struct triple
{
	int first, second, third;
};

bool operator < (triple a, triple b)
{
	if (a.first != b.first)
		return a.first < b.first;
	if (a.second != b.second)
		return a.second < b.second;
	return a.third < b.third;
}

triple make_triple(int a, int b, int c)
{
	triple ans;
	ans.first = a;
	ans.second = b;
	ans.third = c;
	return ans;
}

const int MAXN = 3*1000 + 3;
const int INF = 1000*1000*1000;
bool mrk[MAXN][MAXN];
int d[MAXN][MAXN];
int p[MAXN][MAXN];
vector < int > edge[MAXN][MAXN];
vector <int> preEdge[MAXN];
set <triple> st;


void BFS(int n)
{
	queue < pair <int, int> > q;
	q.push(make_pair(0, 0));
	mrk[0][0] = 1;
	while (!q.empty())
	{
		int v1 = (q.front()).first, v2 = (q.front()).second;
		q.pop();
		for (int i = 0; i < edge[v1][v2].size(); i++)
		{
			int u = edge[v1][v2][i];
			// cerr << v1 + 1 << &#39; &#39; << v2 + 1 << &#39; &#39; << u + 1 << "    test" << endl;
			if (!mrk[v2][u])
			{
				mrk[v2][u] = 1;
				d[v2][u] = d[v1][v2] + 1;
				p[v2][u] = v1;
				q.push(make_pair(v2, u));
			}
		}
	}
}

int32_t main()
{
	ios::sync_with_stdio(false);
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		u--, v--;
		preEdge[u].push_back(v);
		preEdge[v].push_back(u);
	}
	for (int i = 0; i < k; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		u--, v--, w--;
		st.insert(make_triple(u, v, w));
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < preEdge[i].size(); j++)
			for (int k = 0; k < preEdge[i].size(); k++)
			{
				if (st.find(make_triple(preEdge[i][j], i, preEdge[i][k])) == st.end())
					edge[preEdge[i][j]][i].push_back(preEdge[i][k]);
			}
	for (int i = 0; i < preEdge[0].size(); i++)
		edge[0][0].push_back(preEdge[0][i]);


	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < n; j++)
	// 		cerr << edge[i][j].size() << &#39; &#39;;
	// 	cerr << endl;
	// }


	BFS(n);


	int minIndex = -1;
	int minDis = INF;
	for (int i = 0; i < n; i++)
		if (mrk[i][n - 1] && minDis > d[i][n - 1])
		{
			minDis = d[i][n - 1];
			minIndex = i;
		}
	if (minIndex == -1 || minDis == INF)
	{
		cout << -1 << endl;
		return 0;
	}
	cout << minDis << endl;


	vector <int> myvec;
	int x = minIndex, y = n - 1;
	while (y != 0)
	{
		myvec.push_back(y + 1);
		int ans = x;
		x = p[x][y];
		y = ans;
	}
	myvec.push_back(1);
	for (int i = myvec.size() - 1; i >= 0; i--)
		cout << myvec[i] << &#39; &#39;;
	cout << endl;
	return 0;
}
