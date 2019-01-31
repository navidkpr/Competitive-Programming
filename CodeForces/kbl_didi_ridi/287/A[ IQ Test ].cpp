#include <iostream>

using namespace std;

int change_x[3] = {1, 0, 1};
int change_y[3] = {1, 1, 0};
const int MAXN = 10;
char chart[MAXN][MAXN];

int main()
{
	int n = 4;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> chart[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (chart[i][j] == &#39;.&#39;)
				chart[i][j] = &#39;#&#39;;
			else
				chart[i][j] = &#39;.&#39;;
			for (int x = 0; x < n - 1; x++)
				for (int y = 0; y < n - 1; y++)
				{
					bool h = 1;
					for (int k = 0; k < 3; k++)
						if (chart[x][y] != chart[x + change_x[k]][y + change_y[k]])
							h = 0;
					if (h)
					{
						cout << "YES" << endl;
						return 0;
					}
				}
			if (chart[i][j] == &#39;.&#39;)
				chart[i][j] = &#39;#&#39;;
			else
				chart[i][j] = &#39;.&#39;;
		}
	cout << "NO" << endl;
	return 0;
}
