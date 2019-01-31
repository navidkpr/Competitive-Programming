#include <iostream>
#include <algorithm>
#define int long long

using namespace std;

const int MAXN = 100;
pair <int, int> arr[MAXN];

int32_t main()
{
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i].second >> arr[i].first;
	sort(arr, arr + n);
	int sum = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		sum += min(m, arr[i].second) * arr[i].first;
		m -= min(m, arr[i].second);
	}
	cout << sum << endl;
	return 0;
}
