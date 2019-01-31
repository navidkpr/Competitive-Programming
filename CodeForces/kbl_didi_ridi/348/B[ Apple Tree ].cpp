#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 100*1000 + 1000;
vector <int> edge[MAXN];
long long int app[MAXN];
bool mrk[MAXN];
long long int num[MAXN];
bool h = 0;

long long int gcd(long long int a, long long int b)
{
	if (a < b)
		swap(a, b);
	if (b == 0)
		return max(a, (long long int)1);
	else
		return gcd(a % b, b);
}

void dfs(int v, long long int sum)
{
	if (num[v] > sum)
	{
		//cerr << v << endl;
		h = 1;
	}
	if (h == 1)
		return;
	mrk[v] = 1;
	for (int i = 0; i < edge[v].size(); i++)
	{
		int u = edge[v][i];
		if (!mrk[u])
		{
			num[u] = num[v] * (v == 1? edge[v].size() : edge[v].size() - 1);
			dfs(u, sum);
			if (h == 1)
				return;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	long long int n, m;
	cin >> n;
	m = n - 1;
	for (int i = 1; i <= n; i++)
		cin >> app[i];
	long long int sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + app[i];
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;	
		edge[u].push_back(v);
		edge[v].push_back(u);
	}
	num[1] = 1;
	dfs(1, sum);
	long long int ans = 1;
	if (h == 1)
	{
		cout << sum << endl;
		return 0;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (edge[i].size() == 1)
			{
				ans = (ans * num[i]) / gcd(ans, num[i]);
				if (ans > sum)
				{
					cout << sum << endl;
					return 0;
				}
			}
		}
	}
	long long int cnt = 1000*1000*1000;
	for (int i = 1; i <= n; i++)
		if (edge[i].size() == 1 && i != 1)
			cnt = min(cnt, app[i] / (ans / num[i]));
	long long int sum_kol = 0;
	for (int i = 1; i <= n; i++)
	{
		if (edge[i].size() == 1 && i != 1)
			sum_kol += app[i] - (cnt * (ans / num[i]));
	}
	cout << sum_kol << endl;
	return 0;
}
