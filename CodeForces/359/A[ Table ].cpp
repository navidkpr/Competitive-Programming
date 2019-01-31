#include <iostream>

using namespace std;

const int MAXN = 100;
bool arr[MAXN][MAXN];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	for (int i = 0; i < n; i++)
		if (arr[i][0] || arr[i][m - 1])
		{
			cout << 2 << endl;
			return 0;
		}
	for (int i = 0; i < m; i++)
		if (arr[0][i] || arr[n - 1][i])
		{
			cout << 2 << endl;
			return 0;
		}
	cout << 4 << endl;
	return 0;
}
