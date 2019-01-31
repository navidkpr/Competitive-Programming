#include <iostream>

using namespace std;

const int MAXN = 100 + 100;
char arr[MAXN][MAXN];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m - 1; j++)
			if (arr[i][j] != arr[i][j + 1])
			{
				// cerr << i << &#39; &#39; << j << endl;
				cout << "NO" << endl;
				return 0;
			}
	for (int i = 0; i < n - 1; i++)
		if (arr[i][0] == arr[i + 1][0])
		{
			// cerr << i << endl;
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
	return 0;
}
