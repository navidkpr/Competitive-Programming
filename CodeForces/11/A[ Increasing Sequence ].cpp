#include <iostream>
#include <algorithm>
#define int long long
#define endl &#39;\n&#39;

using namespace std;

const int MAXN = 2 * 1000 + 100;
int arr[MAXN];

int32_t main()
{
	int n, d;
	cin >> n >> d;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int cnt = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[i - 1])
			continue;
		// cerr << i << &#39; &#39;;
		// for (int j = 0; j < n; j++)
		// 	cerr << arr[j] << &#39; &#39;;
		cerr << endl;
		cnt += (arr[i - 1] - arr[i]) / d + 1;
		arr[i] += ((arr[i - 1] - arr[i]) / d + 1) * d;
	}
	// for (int i = 0; i < n; i++)
	// 	cerr << arr[i] << &#39; &#39;;
	// cerr << endl;
	cout << cnt << endl;
}
