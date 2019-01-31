#include <iostream>

using namespace std;

const int MAXN = 12 * 1000;
bool mrk[MAXN];

int32_t main()
{
	int n, t;
	cin >> n >> t;
	t *= 2;
	for (int i = 0; i < n; i++)
	{
		int s, l;
		cin >> s >> l;
		l *= 2;
		s *= 2;
		s -= l / 2;
		s += 5000;
		for (int j = s; j < s + l; j++)
			mrk[j] = 1;
	}
	int cnt = 0;
	for (int i = 0; i <= 8 * 1000 + 2; i++)
	{
		bool h = 1;
		for (int j = i; j < i + t; j++)
			if (mrk[j])
			{
				h = 0;
				break;
			}
		if (h && mrk[i + t])
		{
			// cerr << i - 1000 << endl;
			cnt++;
		}
		else if (h && i > 0 && mrk[i - 1])
			cnt++;
	}
	if (cnt > 2 * n)
		cnt = 2 * n;
	cout << cnt << endl;
	return 0;
}
