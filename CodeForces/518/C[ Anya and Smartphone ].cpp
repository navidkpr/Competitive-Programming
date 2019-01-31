#include <iostream>
#include <algorithm>
#define int long long
#define pii pair <int, int> 
#define mp(x, y) make_pair(x, y)
#define endl &#39;\n&#39;

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN];
int pt[MAXN];

int32_t main()
{
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		arr[i]--;
		pt[arr[i]] = i;
	}
	int cnt = 0;
	for (int i = 0; i < m; i++)
	{
		int app;
		cin >> app;
		app--;
		// if (i == m - 1)
			// cerr << pt[app] << endl;
		// cerr << app << endl;
		cnt += pt[app] / k + 1;
		if (pt[app] == 0)
			continue;
		swap(arr[pt[app]], arr[pt[app] - 1]);
		pt[arr[pt[app]]]++;
		pt[app]--;
	}
	cout << cnt << endl;
	return 0;
}
