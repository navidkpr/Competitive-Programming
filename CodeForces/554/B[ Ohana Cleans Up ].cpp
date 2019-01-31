#include <iostream>

using namespace std;

const int MAXN = 100 + 10;
bool arr[MAXN][MAXN];
bool mrk[MAXN];
char c[MAXN][MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> c[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = c[i][j] - &#39;0&#39;;
	int max_cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = 0; j < n; j++)
			mrk[j] = !arr[i][j];
		for (int j = 0; j < n; j++)
		{
			bool h = 1;
			for (int k = 0; k < n; k++)
				if (mrk[k])
				{
					h = h & !arr[j][k];
				}
				else 
					h = h & arr[j][k];
			if (h)
			{
				cnt++;
//				cerr << i << &#39; &#39; << j << endl;
			}
		}
		max_cnt = max(max_cnt, cnt);	
	}
	cout << max_cnt << endl;
}
