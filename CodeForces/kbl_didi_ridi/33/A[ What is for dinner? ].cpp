#include <iostream>

using namespace std;

const int INF = 1000*1000*1000;
const int MAXN = 1000 + 100;
int arr[MAXN];

int32_t main()
{
	int n, m, k;
	cin >> n >> m >> k;
	fill(arr, arr + MAXN, INF);
	for (int i = 0; i < n; i++)
	{
		int r, c;
		cin >> r >> c;
		r--;
		arr[r] = min(arr[r], c);
	}
	int sum = 0;
	for (int i = 0; i < m; i++)
		sum += arr[i];
	cout << min(sum, k) << endl;
	return 0;
}
