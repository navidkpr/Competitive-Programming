#include <iostream>

using namespace std;

const int MAXN = 100 + 10;
char c[MAXN][MAXN];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> c[i][j];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			if (c[i][j] == &#39;-&#39;)
				cout << c[i][j];
			else if ((i + j) % 2 == 0)
				cout << &#39;B&#39;;
			else
				cout << &#39;W&#39;;
		cout << endl;
	}
}
