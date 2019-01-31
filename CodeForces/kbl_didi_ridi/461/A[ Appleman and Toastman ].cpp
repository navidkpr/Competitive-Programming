#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 400*1000;
long long int arr[MAXN];

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	long long int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i] * (i + 2);
	sum -= arr[n - 1];
	cout << sum << endl;
	return 0;
}
