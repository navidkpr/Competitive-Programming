#include <iostream>

using namespace std;

const int MAXN = 1000;
int arr[MAXN];
int mrk[MAXN][MAXN];

int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		mrk[arr[i]][i % k]++;
	int sum = 0;
	for (int i = 0; i < k; i++)
		sum += (n / k) - max(mrk[1][i], mrk[2][i]);
	cout << sum << endl;
	return 0;
}
