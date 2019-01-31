#include <iostream>

using namespace std;

char arr[5][5];

int32_t main()
{
	int n = 3;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	bool h = 0;
	int win = -1;
	for (int i = 0; i < n; i++)
	{
		bool g = 1;
		for (int j = 0; j < n; j++)
			if (arr[i][j] != &#39;X&#39;)
				g = 0;
		if (g && h)
		{
			cout << "illegal" << endl;
			return 0;
		}
		if (g)
		{
			h = 1;
			win = 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		bool g = 1;
		for (int j = 0; j < n; j++)
			if (arr[i][j] != &#39;0&#39;)
				g = 0;
		if (g && h)
		{
			cout << "illegal" << endl;
			return 0;
		}
		if (g)
		{
			h = 1;
			win = 2;
		}
	}
	bool ans = h;
	h = 0;
	for (int i = 0; i < n; i++)
	{
		bool g = 1;
		for (int j = 0; j < n; j++)
			if (arr[j][i] != &#39;0&#39;)
				g = 0;
		if (g && h)
		{
			cout << "illegal" << endl;
			return 0;
		}
		if (g)
		{
			h = 1;
			win = 2;
		}
	}
	// cerr << "WTF" << endl;
	for (int i = 0; i < n; i++)
	{
		bool g = 1;
		for (int j = 0; j < n; j++)
			if (arr[j][i] != &#39;X&#39;)
				g = 0;
		if (g && h)
		{
			cout << "illegal" << endl;
			return 0;
		}
		if (g)
		{
			h = 1;
			win = 1;
		}
	}
	h = ans | h;
	bool g = 1;
	for (int i = 0; i < n; i++)
		if (arr[i][i] != &#39;X&#39;)
			g = 0;
	if (g)
	{
		h = 1;
		win = 1;
	}
	g = 1;
	for (int i = 0; i < n; i++)
		if (arr[i][n - i - 1] != &#39;X&#39;)
			g = 0;
	// cerr << "WTF" << endl;
	if (g)
	{
		h = 1;
		win = 1;
	}
	g = 1;
	for (int i = 0; i < n; i++)
		if (arr[i][n - i - 1] != &#39;0&#39;)
			g = 0;
	if (g)
	{
		h = 1;
		win = 2;
	}
	g = 1;
	for (int i = 0; i < n; i++)
		if (arr[i][i] != &#39;0&#39;)
			g = 0;
	if (g)
	{
		h = 1;
		win = 2;
	}
	// cerr << "WTF" << endl;
	int cnt_1 = 0, cnt_2 = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[i][j] == &#39;X&#39;)
				cnt_1++;
			else if (arr[i][j] == &#39;0&#39;)
				cnt_2++;
	// cerr << cnt_1 << &#39; &#39; << cnt_2 << endl;
	if (cnt_1 > cnt_2 + 1 || cnt_2 > cnt_1)
	{
		cout << "illegal" << endl;
		return 0;
	}
	if (win == 1 && cnt_1 > cnt_2)
		cout << "the first player won" << endl;
	else if (win == 1)
		cout << "illegal" << endl;
	else if (win == 2 && cnt_1 == cnt_2)
		cout << "the second player won" << endl;
	else if (win == 2)
		cout << "illegal" << endl;
	else if (cnt_1 + cnt_2 == n * n)
		cout << "draw" << endl;
	else if (cnt_1 > cnt_2)
		cout << "second" << endl;
	else
		cout << "first" << endl;
	return 0;
}
