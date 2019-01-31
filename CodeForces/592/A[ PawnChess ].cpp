#include <iostream>

using namespace std;

const int INF = 1000*1000*1000;
const int MAXN = 10;
char c[MAXN][MAXN];
bool mrk_w[MAXN], mrk_b[MAXN];
int first_w[MAXN], first_b[MAXN], last_w[MAXN], last_b[MAXN];

int main()
{
	int n = 8;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> c[i][j];
	for (int i = 0; i < n; i++)
		last_w[i] = last_b[i] = -INF;
	for (int i = 0; i < n; i++)
		first_w[i] = first_b[i] = INF;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (c[i][j] == &#39;B&#39; && !mrk_b[j])
			{
				mrk_b[j] = 1;
				first_b[j] = i;
			}
			if (c[i][j] == &#39;W&#39; && !mrk_w[j])
			{
				mrk_w[j] = 1;
				first_w[j] = i;
			}
			if (c[i][j] == &#39;W&#39;)
			{
				mrk_w[j] = 1;
				last_w[j] = i;
			}
			if (c[i][j] == &#39;B&#39;)
			{
				mrk_b[j] = 1;
				last_b[j] = i;
			}
		}
//	for (int i = 0; i < n; i++)
//		cerr << first_w[i] << &#39; &#39;;
//	cerr << endl;
	int min_w = INF, max_b = -INF;
	for (int i = 0; i < n; i++)
	{
		if (mrk_w[i] && first_w[i] < first_b[i])
			min_w = min(min_w, first_w[i]);
		if (mrk_b[i] && last_b[i] > last_w[i])
			max_b = max(max_b, last_b[i]);
	}
//	cerr << min_w << &#39; &#39; << max_b << endl;
	if (min_w < 8 - max_b)
		cout << &#39;A&#39; << endl;
	else
		cout << &#39;B&#39; << endl;
	return 0;
}
