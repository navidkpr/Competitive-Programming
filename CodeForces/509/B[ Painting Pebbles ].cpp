#include <iostream>

using namespace std;

const int MAXN = 1000;
int arr[MAXN];
int cnt[MAXN][MAXN];

int abs(int n)
{
	if (n < 0)
		return -n;
	return n;
}

int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
			cnt[i][j] = arr[i] / k;
		for (int j = 0; j < arr[i] % k; j++)
			cnt[i][j]++;
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				if (abs(cnt[i][k] - cnt[j][k]) > 1)
				{
					cout << "NO" << endl;
					return 0;
				}
	cout << "YES" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
			for (int k = 0; k < cnt[i][j]; k++)
				cout << j + 1 << &#39; &#39;;
		cout << endl;
	}

	return 0;
}
