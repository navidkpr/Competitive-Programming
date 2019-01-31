#include <iostream>

using namespace std;

const int MAXN = 100 + 10;
bool arr[MAXN][MAXN];
bool javab[MAXN][MAXN];
bool ans[MAXN][MAXN];
bool row[MAXN], col[MAXN];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	for (int i = 0; i < n; i++)
		row[i] = 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			row[i] = row[i] & arr[i][j];
	for (int i = 0; i < m; i++)
		col[i] = 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			col[j] = col[j] & arr[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			javab[i][j] = row[i] & col[j];
	for (int i = 0; i < n; i++)
		row[i] = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			row[i] = row[i] | javab[i][j];
	for (int i = 0; i < m; i++)
		col[i] = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			col[j] = col[j] | javab[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			ans[i][j] = col[j] | row[i];
	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < m; j++)
	// 		cerr << javab[i][j] << &#39; &#39;;
	// 	cerr << endl;
	// }
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (arr[i][j] != ans[i][j])
			{
				cout << "NO" << endl;
				return 0;
			}
	cout << "YES" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << javab[i][j] << &#39; &#39;;
		cout << endl;
	}
	return 0;
}
