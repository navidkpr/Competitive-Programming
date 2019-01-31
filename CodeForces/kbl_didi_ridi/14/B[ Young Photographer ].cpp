#include <iostream>

using namespace std;

const int MAXN = 100 + 10;
pair <int, int> arr[MAXN];

int32_t main()
{
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;
	int l = 0, r = 1000;
	for (int i = 0; i < n; i++)
		if (arr[i].first > arr[i].second)
			swap(arr[i].first, arr[i].second);
	for (int i = 0; i < n; i++)
	{
		// cerr << i + 1 << &#39; &#39; << l << &#39; &#39; << r << endl;
		if (arr[i].first > r || arr[i].second < l)
		{
			cout << -1 << endl;
			return 0;
		}
		l = max(l, arr[i].first);
		r = min(r, arr[i].second);
	}
	if (x <= r && x >= l)
	{
		cout << 0 << endl;
		return 0;
	}
	if (x < l)
		cout << l - x << endl;
	else
		cout << x - r << endl;
	return 0;
}
