#include <iostream>

using namespace std;

const int MAXN = 300 + 100;
char c[MAXN][MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> c[i][j];
	for (int i = 1; i < n; i++)
		if (c[i][i] != c[i - 1][i - 1])
		{
			cout << "NO" << endl;
			return 0;
		}
	for (int i = 1; i < n; i++)
		if (c[i][n - i - 1] != c[i - 1][n - i])
		{
			cout << "NO" << endl;
			return 0;
		}
	if (c[0][0] != c[n - 1][0])
	{
		cout << "NO" << endl;
		return 0;
	}
	if (n == 2)
	{
		cout << "YES" << endl;
		return 0;
	}
	int ans = c[1][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i == j || i + j == n - 1)
				continue;
			else
			{
				if (ans != c[i][j])
				{
					cout << "NO" << endl;
					return 0;
				}
			}
	if (c[1][0] == c[0][0])
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;
}
