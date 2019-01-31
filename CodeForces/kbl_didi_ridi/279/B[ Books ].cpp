#include <iostream>
#define int long long

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN];


int32_t main()
{
	int n, t;
	cin >> n >> t;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int s = 0;
	int cnt = 0;
	int max_cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cnt += arr[i];
		if (cnt <= t)
			max_cnt = max(i - s + 1, max_cnt);
		else
			cnt -= arr[s++];
	}
	cout << max_cnt << endl;
	return 0;
}
