#include <iostream>

using namespace std;

const int MAXN = 100*1000 + 100;
int max_h[MAXN];
int arr[MAXN];

int	main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	max_h[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i--)
		max_h[i] = max(arr[i], max_h[i + 1]);
	for (int i = 0; i < n; i++)
		cout << max(0, max_h[i + 1] - arr[i] + 1) << &#39; &#39;;
	cout << endl;
}
