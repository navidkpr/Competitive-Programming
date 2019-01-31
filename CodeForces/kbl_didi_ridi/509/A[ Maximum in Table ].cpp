#include <iostream>

using namespace std;

const int MAXN = 100;
int d[MAXN][MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		d[i][1] = d[1][i] = 1;
	for (int i = 2; i <= n; i++)
		for (int j = 2; j <= n; j++)
			d[i][j] = d[i - 1][j] + d[i][j - 1];
	cout << d[n][n] << endl;
	return 0;
}
