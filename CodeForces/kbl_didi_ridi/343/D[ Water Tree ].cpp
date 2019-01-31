#include <iostream>
#include <algorithm>
#include <vector>
#define int long long

using namespace std;

const int MAXN = 500*1000 + 1000;
vector <int> edge[MAXN];
bool mrk[MAXN];
int p[MAXN], st[MAXN], et[MAXN];
int cnt;
int seg[4 * MAXN];
int seg_2[4 * MAXN];

void dfs(int v)
{
	mrk[v] = 1;
	st[v] = cnt++;
	for (int i = 0; i < edge[v].size(); i++)
	{
		int u = edge[v][i];
		if (!mrk[u])
		{
			p[u] = v;
			dfs(u);
		}
	}
	et[v] = cnt;
}

void fill(int s, int e, int l, int r, int ind, int t)
{
	if (e <= l || r <= s)
		return;
	if (s <= l && e >= r)
	{
		seg[ind] = t;
		return;
	}
	int m = (l + r) / 2;
	fill(s, e, l, m, ind * 2 + 0, t);
	fill(s, e, m, r, ind * 2 + 1, t);
}

void empty(int l, int r, int ind, int x, int t)
{
	seg_2[ind] = t;
	if (l == r - 1)
		return;
	int m = (l + r) / 2;
	if (x < m)
		empty(l, m, ind * 2 + 0, x, t);
	else
		empty(m, r, ind * 2 + 1, x, t);
}

int give_full(int l, int r, int ind, int x)
{
	if (l == r - 1)
		return seg[ind];
	int m = (l + r) / 2;
	int ans;
	if (x < m)
		ans = give_full(l, m, ind * 2 + 0, x);
	else
		ans = give_full(m, r, ind * 2 + 1, x);
	return max(ans, seg[ind]);
}

int give_empty(int s, int e, int l, int r, int ind)
{
	if (e <= l || r <= s)
		return 0;
	if (s <= l && e >= r)
		return seg_2[ind];
	int m = (l + r) / 2;
	int ans = give_empty(s, e, l, m, ind * 2 + 0);
	ans = max(ans, give_empty(s, e, m, r, ind * 2 + 1));
	return ans;
}

int32_t main()
{
	ios::sync_with_stdio(false);
	int n, q;
	cin >> n;
	for (int i = 0; i < n - 1; i++)
	{
		int u, v;
		cin >> u >> v;
		u--; v--;
		edge[u].push_back(v);
		edge[v].push_back(u);
	}
	dfs(0);
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int v, op;
		cin >> op >> v;
		v--;
		if (op == 1)
		{
			fill(st[v], et[v], 0, n, 1, i + 1);
			// cerr << &#39;\n&#39;;
			// for (int i = 0; i < 4 * n; i++)
			// 	cerr << seg[i] << &#39; &#39;;
			// cerr << &#39;\n&#39; << &#39;\n&#39;;
		}
		else if (op == 2)
		{
			empty(0, n, 1, st[v], i + 1);
			// cerr << &#39;\n&#39;;
			// for (int i = 0; i < 4 * n; i++)
			// 	cerr << seg_2[i] << &#39; &#39;;
			// cerr << &#39;\n&#39; << &#39;\n&#39;;
		}
		else
		{
			int num_1 = give_full(0, n, 1, st[v]);
			int num_2 = give_empty(st[v], et[v], 0, n, 1);
			// cerr << &#39;\n&#39; << num_1 << &#39; &#39; << num_2 << &#39;\n&#39;;
			if (num_2 >= num_1)
				cout << 0 << &#39;\n&#39;;
			else
				cout << 1 << &#39;\n&#39;;
		}
	}
	return 0;
}
