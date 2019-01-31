#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 1000;
int arr[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	if (sum % 2 == 1)
	{
		cout << sum << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
		if (arr[i] % 2 == 1)
		{
			cout << sum - arr[i] << endl;
			return 0;
		}
	cout << 0 << endl;
	return 0;
}
