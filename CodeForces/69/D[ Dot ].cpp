#include <iostream>
#include <cmath>

using namespace std;

const int MAXN = 200 + 10;
pair <int, int> arr[MAXN];
int d_2[MAXN * 10][MAXN * 10];

int32_t main()
{
	int x, y, d, n;
	cin >> x >> y >> n >> d;
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;
	if (sqrt(x * x + y * y) > d)
	{
		cout << "Dasha" << endl;
		return 0;
	}
	for (int i = 200; i <= 1000; i++)
		for (int j = 200; j <= 1000; j++)
			if (sqrt((i - 200) * (i - 200) + (j - 200) * (j - 200)) > d)
				d_2[i][j] = 1;
	for (int i = 600; i >= 0; i--)
		for (int j = 600; j >= 0; j--)
		{
			if (d_2[i][j] != 0)
				continue;
			bool h = 0;
			for (int k = 0; k < n; k++)
				if (d_2[i + arr[k].first][j + arr[k].second] == 2)
					h = 1;
			if (h)
				d_2[i][j] = 1;
			else
				d_2[i][j] = 2;
		}
	// for (int i = 200; i < 210; i++)
	// {
	// 	for (int j = 200; j < 210; j++)
	// 		cout << d_2[i][j] << &#39; &#39;;
	// 	cout << endl;
	// }
	if (d_2[x + 200][y + 200] == 1)
		cout << "Anton" << endl;
	else
		cout << "Dasha" << endl;
	return 0;
}
