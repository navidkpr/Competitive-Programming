#include <iostream>

using namespace std;

const int MAXN = 10;
char jad[MAXN][MAXN];

int main()
{
	int n = 8;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> jad[i][j];
	for (int i = 0; i < n; i++)
	{
		char ans = jad[i][0];
		for (int j = 1; j < n; j++)
		{
			if (jad[i][j] == ans)
			{
				cout << "NO" << endl;
				return 0;
			}
			else
				ans = jad[i][j];
		}
	}
	cout << "YES" << endl;
	return 0;
}
