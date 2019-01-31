#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 200;
int cnt[MAX];

bool check()
{
	for (int i = 0; i < MAX; i++)
		if (cnt[i] != 0)
		{
			// cerr << i << endl;
			return 0;
		}
	return 1;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		cnt[num]++;
	}
	int max_cnt = 0;
	int cnt_kol = 0;
	while (!check())
	{
		// for (int i = 0; i < 10; i++)
		// 	cerr << cnt[i] << &#39; &#39;;
		// cerr << endl;
		int cnt_up = 0;
		for (int i = 0; i < MAX; i++)
			while (cnt[i] > 0 && i >= cnt_up)
			{
				cnt[i]--;
				cnt_up++;
				// cerr << i << &#39; &#39;;
			}
		// cerr << endl;
		cnt_kol++;
	}
	cout << cnt_kol << endl;
	return 0;
}
