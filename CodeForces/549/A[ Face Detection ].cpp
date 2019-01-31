#include <iostream>

using namespace std;

const int MAXN = 100;
char arr[4] = {&#39;f&#39;, &#39;a&#39;, &#39;c&#39;, &#39;e&#39;};
bool mrk[4];
int change_x[4] = {0, 1, 1, 0};
int change_y[4] = {0, 1, 0, 1};
char c[MAXN][MAXN];

int main() {
	int n, m;
	cin >> n >> m;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	 for (int j = 0; j < m; j++)
		cin >> c[i][j];
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < m - 1; j++)
		{
			bool h = 1;
			for (int k = 0; k < 4; k++)
				mrk[k] = 0;
			for (int k = 0; k < 4; k++)
				for (int x = 0; x < 4; x++)
					if (c[i + change_x[k]][j + change_y[k]] == arr[x])
						mrk[x] = 1;
			for (int k = 0; k < 4; k++)
				if (mrk[k] != 1)
					h = 0;
			cnt += h;
		}
		cout << cnt << endl;
		return 0;
}
