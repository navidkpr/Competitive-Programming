#include <iostream>

using namespace std;

const int MAXN = 100;
char arr[MAXN][MAXN];

int32_t main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	int s1 = 0, s2 = 0, e1 = n - 1, e2 = m - 1;
	bool h = 1;
	while (h)
	{
		for (int i = 0; i < m; i++)
			if (arr[s1][i] == &#39;*&#39;)
				h = 0;
		if (h)
			s1++;
	}
	h = 1;
	while (h)
	{
		for (int i = 0; i < m; i++)
			if (arr[e1][i] == &#39;*&#39;)
				h = 0;
		if (h)
			e1--;
	}
	h = 1;
	while (h)
	{
		for (int i = 0; i < n; i++)
			if (arr[i][s2] == &#39;*&#39;)
				h = 0;
		if (h)
			s2++;
	}
	h = 1;
	while (h)
	{
		for (int i = 0; i < n; i++)
			if (arr[i][e2] == &#39;*&#39;)
				h = 0;
		if (h)
			e2--;
	}
	for (int i = s1; i <= e1; i++)
	{
		for (int j = s2; j <= e2; j++)
			cout << arr[i][j];
		cout << endl;
	}
}
