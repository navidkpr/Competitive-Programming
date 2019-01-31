#include <iostream>
#define int long long
#define endl &#39;\n&#39;

using namespace std;

const int MAXN = 200*1000 + 1000;
int w[MAXN], h[MAXN];
int sum[MAXN], max_begin[MAXN], max_end[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> w[i] >> h[i];
	max_begin[0] = h[0];
	for (int i = 1; i < n; i++)
		max_begin[i] = max(max_begin[i - 1], h[i]);
	max_end[n - 1] = h[n - 1];
	for (int i = n - 2; i >= 0; i--)
		max_end[i] = max(max_end[i + 1], h[i]);
	sum[0] = w[0];
	for (int i = 1; i < n; i++)
		sum[i] = sum[i - 1] + w[i];
	for (int i = 0; i < n; i++)
		cout << (sum[n - 1] - w[i]) * max(max_end[i + 1], max_begin[i - 1]) << &#39; &#39;;
	cout << endl;
	return 0;
}
