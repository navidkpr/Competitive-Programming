#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int MAXN = 500 + 10;
int change_x[4] = {-1, 0, 0, 1};
int change_y[4] = {0, -1, 1, 0};
char arr[MAXN][MAXN];
bool mrk[MAXN][MAXN];
int n, m;
vector < pair <int, int> > myvec; 

void dfs (int x, int y)
{
	mrk[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		int new_x = x + change_x[i];
		int new_y = y + change_y[i];
		if (new_x < n && new_x >= 0 && new_y < m && new_y >= 0 && arr[new_x][new_y] == &#39;.&#39; && !mrk[new_x][new_y])
			dfs(new_x, new_y);
	}
	myvec.push_back(make_pair(x, y));
}

int main()
{
	int k;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (arr[i][j] == &#39;.&#39;)
			{
				dfs(i, j);
				for (int i = 0; i < k; i++)
					arr[myvec[i].first][myvec[i].second] = &#39;X&#39;;
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < m; j++)
						cout << arr[i][j];
					cout << endl;
				}
				return 0;
			}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << arr[i][j];
		cout << endl;
	}
}
