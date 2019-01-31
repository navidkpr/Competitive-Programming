#include <iostream>

using namespace std;

const int MAXN = 10;
int arr[MAXN][MAXN];

int32_t main()
{
	int n = 3;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	arr[0][0] = 1;
	int sum = arr[0][0] + arr[0][1] + arr[0][2];
	for (int i = 1; i < n; i++)
	{
		int ans = 0;
		for (int j = 0; j < n; j++)
			ans += arr[i][j];
		arr[i][i] = sum - ans;
	}
	int min_el = 0;
	for (int i = 0; i < n; i++)
		min_el = min(min_el, arr[i][i]);
	if (min_el != 0)
		for (int i = 0; i < n; i++)
			arr[i][i] += -min_el + 1;
	int sum_diagonal = 0;
	sum = sum - 1 + arr[0][0];
	for (int i = 0; i < n; i++)
		sum_diagonal += arr[i][i];
	while (sum_diagonal < sum)
	{
		sum_diagonal += 3;
		sum++;
		for (int i = 0; i < n; i++)
			arr[i][i]++;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << &#39; &#39;;
		cout << endl;
	}
}
