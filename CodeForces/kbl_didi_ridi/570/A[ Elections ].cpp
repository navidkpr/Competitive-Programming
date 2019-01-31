#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 200;
int arr[MAXN][MAXN];

int main()
{
	ios::sync_with_stdio(false);
	int n, m;
	cin >> m >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	vector <int> winner;
	for (int i = 0; i < n; i++)
	{
		int max = arr[i][0], max_index = 0;
		for (int j = 0; j < m; j++)
			if (max < arr[i][j])
				{
					max_index = j;
					max = arr[i][j];
				}
		winner.push_back(max_index);
	}
	int b[MAXN];
	fill(b, b + m, 0);
	for (int i = 0; i < winner.size(); i++)
		b[winner[i]]++;
	int max = b[0], max_index = 0;
	for (int j = 0; j < m; j++)
		if (b[j] > max)
		{
			max = b[j];
			max_index = j;
		}
	cout << max_index + 1 << endl;
	return 0;
}
