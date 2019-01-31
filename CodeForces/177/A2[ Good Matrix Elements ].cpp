#include <iostream>
#define int long long

using namespace std;

const int MAXN = 100 + 10;
int arr[MAXN][MAXN];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i][i] + arr[i][n - i - 1];
	for (int i = 0; i < n; i++)
		sum += arr[i][n / 2] + arr[n / 2][i];
	sum -= arr[n / 2][n / 2] * 3;
	cout << sum << endl;
	return 0;
}
