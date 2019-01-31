#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1000 + 100;
int moal[MAXN];
vector < pair <int, int> > myvec;
pair <int, int> from[MAXN], to[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		moal[i] = i + 1;
	// cerr << "WTF" << endl;
	for (int i = 0; i < n - 1; i++)
	{
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		if (moal[x] == moal[y])
			myvec.push_back(make_pair(x, y));
		else
		{
			int ans = moal[y];
			for (int j = 0; j < n; j++)
				if (moal[j] == ans)
					moal[j] = moal[x];
		}
	}
	// cerr << "WTF" << endl;
	for (int i = 0; i < myvec.size(); i++)
		cerr << myvec[i].first << &#39; &#39; << myvec[i].second << endl;
	for (int i = 0; i < n; i++)
		cerr << moal[i] << &#39; &#39;;
	cerr << endl;
	int cnt = 0;
	for (int i = 1; i < n; i++)
	{
		if (moal[i] == moal[i - 1])
			continue;
		from[cnt] = myvec[cnt];
		to[cnt] = make_pair(i, i - 1);
		cnt++;
		int ans = moal[i];
		for (int j = 0; j < n; j++)
			if (moal[j] == ans)
				moal[j] = moal[i - 1];
	}
	cout << cnt << endl;
	for (int i = 0; i < cnt; i++)
		cout << from[i].first + 1 << &#39; &#39; << from[i].second + 1 << &#39; &#39; << to[i].first + 1 << &#39; &#39; << to[i].second + 1 << endl;
}
