#include <iostream>

using namespace std;

const int MAXN = 5*1000;
int d[MAXN][MAXN];

int main()
{
	string s; cin >> s;
	int n = s.size();
	string ans = "bear";
	for (int i = 0; i < n - 3; i++)
	{
		bool h = 1;
		for (int j = i; j < i + 4; j++)
			if (s[j] != ans[j - i])
				h = 0;
		if (h)
			d[i][i + 3] = 1;
	}
	// for (int i = 0; i < n; i++)
		// cerr << d[i][i + 3] << endl;
	for (int i = 4; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			d[j][j + i] = d[j][j + i - 1];
			bool h = 1;
			for (int k = j + i - 3; k <= j + i; k++)
				if (s[k] != ans[k - (j + i - 3)])
					h = 0;
			if (h)
				d[j][j + i] = 1;
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cnt += d[i][j];
	cout << cnt << endl;
	return 0;
}
