#include <iostream>

using namespace std;

const int MAXN = 10;
int arr[MAXN];

int32_t main()
{
	int n = 6;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int sum = 0;
	for (int i = 0; i < 3; i++)
		sum += arr[i];
	sum = sum * sum;
	for (int i = 0; i < n; i += 2)
		sum -= arr[i] * arr[i];
	cout << sum << endl;
	return 0;
}
