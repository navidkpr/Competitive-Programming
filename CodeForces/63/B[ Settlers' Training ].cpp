#include <iostream>

using namespace std;

const int MAXN = 100 + 10;
int cnt[MAXN];
int ans[MAXN];

bool check(int n, int k)
{
	for (int i = 0; i < k; i++)
		if (cnt[i] != 0)
		{
			// cerr << i << &#39; &#39; << cnt[i] << endl;
			return 0;
		}
	return 1;
}

int32_t main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		cnt[num]++;
	}
	int cnt_lvl = 0;
	while (!check(n, k))
	{
		for (int i = 0; i < k; i++)
			ans[i] = cnt[i];
		// for (int i = 1; i <= k; i++)
			// cerr << cnt[i] << &#39; &#39;;
		// cerr << endl;
		for (int i = 0; i < k; i++)
			if (cnt[i] != 0)
			{
				ans[i]--;
				ans[i + 1]++;
			}
		for (int i = 0; i <= k; i++)
			cnt[i] = ans[i];
		cnt_lvl++;
	}
	cout << cnt_lvl << endl;
	return 0;
}
