#include <iostream>
#include <vector>
#include <algorithm>
#define int long long

using namespace std;

const int MAXN = 10*1000 + 1000;
int n, m, cnt_same = 0;
vector < pair <int, int> > edge[MAXN];
bool mrk[MAXN];
bool kind[MAXN];
pair <int, int> p[MAXN];
int lvl[MAXN];
pair <int, int> last_same;
int cnt[MAXN];
int cnt_2[MAXN];
int pt = 0;
int st[MAXN], et[MAXN];

void dfs(int v)
{
	st[v] = pt++;
	mrk[v] = 1;
	for (int i = 0; i < edge[v].size(); i++)
	{
		int u = edge[v][i].first;
		if (!mrk[u])
		{
			kind[u] = !kind[v];
			p[u] = make_pair(v, i);
			lvl[u] = lvl[v] + 1;
			dfs(u);
			cnt[v] += cnt[u];
			cnt_2[v] += cnt_2[u] - 1;
		}
		else if (kind[u] == kind[v])
		{
			last_same = make_pair(v, i);
			cnt_same++;
			if (st[u] > st[v] && et[u] != 0)
				cnt[v]--;
			else
				cnt[v]++;
		}
		else
		{
			if (st[u] > st[v] && et[u] != 0)
				cnt_2[v]--;
			else
				cnt_2[v]++;
		}
	}
	et[v] = pt;
}

void run_dfs()
{
	for (int i = 0; i < n; i++)
		if (!mrk[i])
			dfs(i);
}

int32_t main()
{
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		u--; v--;
		edge[u].push_back(make_pair(v, i));
		edge[v].push_back(make_pair(u, i));
	}
	run_dfs();
	cnt_same /= 2;
	vector <int> javab;
	if (cnt_same == 0)
	{
		cout << m << endl;
		for (int i = 0; i < m; i++)
			cout << i + 1 << &#39; &#39;;
		cout << endl;
		return 0;
	}
	cerr << endl;
	for (int i = 0; i < n; i++)
		cerr << cnt[i] << &#39; &#39; << cnt_2[i] << endl;
	cerr << endl;
	if (cnt_same == 1)
		javab.push_back(edge[last_same.first][last_same.second].second);
	for (int i = 0; i < n; i++)
		if (cnt[i] == cnt_same && cnt_2[i] == 1)
			javab.push_back(edge[p[i].first][p[i].second].second);
	sort(javab.begin(), javab.end());
	cout << javab.size() << endl;
	for (int i = 0; i < javab.size(); i++)
		cout << javab[i] + 1 << &#39; &#39;;
	cout << endl;
}
