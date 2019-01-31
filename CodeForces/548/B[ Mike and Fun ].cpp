#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 500 + 100;
bool b[MAXN][MAXN];
int d[MAXN][MAXN], d2[MAXN];
vector <int> v;

int main()
{
	int n, m, q;
	cin >> n >> m >> q;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> b[i][j];
	for (int i = 0; i < n; i++)
		d[i][0] = b[i][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if ( b[i][j] )
			{
				d[i][j] = d[i][j - 1] + 1;
				d2[i] = max(d2[i], d[i][j]);
			}
	for (int i = 0; i < q; i++)
	{
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		b[x][y] = 1 - b[x][y];
		d[x][0] = b[x][0];
		d2[x] = d[x][0];
		for (int j = 1; j < m; j++)
		{
			if ( b[x][j] )
				d[x][j] = d[x][j - 1] + 1;
			else
				d[x][j] = 0;
			d2[x] = max(d2[x], d[x][j]);
		}
		int max1 = d2[0];
		for (int j = 0; j < n; j++)
			max1 = max(max1, d2[j]);
		v.push_back(max1);
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	return 0;
}
