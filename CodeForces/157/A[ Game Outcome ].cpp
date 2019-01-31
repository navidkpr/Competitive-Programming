#include <iostream>

using namespace std;

const int MAXN = 100;
int arr[MAXN][MAXN];
int row[MAXN], col[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			row[i] += arr[i][j];
			col[j] += arr[i][j];
		}
	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (row[i] < col[j])
				cnt++;
	cout << cnt << endl;
	return 0;
}
