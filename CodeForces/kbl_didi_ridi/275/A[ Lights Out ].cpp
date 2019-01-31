#include <iostream>

using namespace std;

int change_x[5] = {0, 0, 0, 1, -1}, change_y[5] = {0, 1, -1, 0, 0};
const int MAXN = 10;
bool mrk[MAXN][MAXN];
int arr[MAXN][MAXN];

int main()
{
	int n = 3;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			mrk[i][j] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (arr[i][j] % 2 == 1)
			{
				for (int k = 0; k < 5; k++)
					mrk[i + change_x[k]][j + change_y[k]] = 1 - mrk[i + change_x[k]][j + change_y[k]];
			}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << mrk[i][j];
		cout << endl;
	}
}
