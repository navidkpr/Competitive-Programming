#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define int long long
#define pii pair <int, int>
#define endl &#39;\n&#39;
#define mp(x, y) make_pair(x, y)

using namespace std;

const int MAXN = 1000 + 100;
int w[MAXN], arr[MAXN];
int javab[MAXN];
bool mrk[MAXN];

int32_t main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> w[i];
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
		arr[i]--;
	}
	for (int i = 0; i < MAXN; i++)
		javab[i] = -1;
	int pt = 0;
	int cnt = 0;
	for (int i = 0; i < m; i++)
	{
		for (int i = 0; i < n; i++)
			mrk[i] = 0;
		// cnt += arr[i];
		bool h = 0;
		for (int j = pt - 1; j >= 0; j--)
			if (javab[j] == arr[i])
			{
				h = 1;
				for (int k = 0; k < n; k++)
					if (mrk[k])
						cnt += w[k];
				break;
			}
			else
				mrk[javab[j]] = 1;
		javab[pt++] = arr[i];
		if (!h)
			for (int k = 0; k < n; k++)
				if (mrk[k])
					cnt += w[k];
	}
	cout << cnt << endl;
	return 0;
}
