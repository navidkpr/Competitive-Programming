#include <iostream>

using namespace std;

const int MAXN = 3*1000 + 100;
int n, k, arr[MAXN], ifEnd[MAXN], cnt;
bool mrk[MAXN][MAXN];

void dfs(int t, int x, int y)
{
	if (mrk[x][y]) 
		return;
	mrk[x][y] = 1;
	cnt++;
	if (!t || y > n)
		return;
	if (arr[x] && ifEnd[y]) 
		dfs(t - 1, y + 1, y + 2);
	if (ifEnd[y] && arr[x] != 100)
		dfs(t - 1, y, y + 1);
	if (arr[x] && ifEnd[y] != 100) 
		dfs(t - 1, x, y + 1);
}

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int i = n; i >= 0; i--)
		ifEnd[i] = max(ifEnd[i + 1], arr[i]);
	dfs(k, 1, 2);
	cout << cnt << endl;
	return 0;
}
