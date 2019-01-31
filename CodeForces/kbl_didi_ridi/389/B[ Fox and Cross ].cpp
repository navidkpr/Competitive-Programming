#include <iostream>

using namespace std;

const int MAXN = 100 + 100;
bool mrk[MAXN][MAXN];
int change_y[5] = {0, 0, 0, 1, -1};
int change_x[5] = {0, 1, 2, 1, 1};


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			char c;
			cin >> c;
			if (c == &#39;#&#39;)
				mrk[i][j] = 1;
		}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cerr << mrk[i][j] << &#39; &#39;;
		cerr << endl;
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (!mrk[i][j])
				continue;
			for (int k = 0; k < 5; k++)
			{
				int x = change_x[k] + i;
				int y = change_y[k] + j;
				// cerr << endl;
				// cerr << x << &#39; &#39; << y << endl << i << &#39; &#39; << j << endl;
				// cerr << endl;
				if (x >= n || x < 0 || y >= n || y < 0)
				{
					cout << "NO" << endl;
					return 0;
				}
				if (!mrk[x][y])
				{
					cout << "NO" << endl;
					return 0;
				}
				mrk[x][y] = 0;
			}
		}
	cout << "YES" << endl;
	return 0;
}
