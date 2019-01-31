#include <iostream>

using namespace std;

const int MAXN = 10*1000*1000;
int cnt[MAXN];

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num; 
		cin >> num;
		cnt[num]++;
	}
	for (int i = 0; i < MAXN - 1; i++)
	{
		cnt[i + 1] += cnt[i] / 2;
		cnt[i] = cnt[i] % 2;
	}
	int cnt_kol = 0;
	for (int i = 0; i < MAXN; i++)
		if (cnt[i] > 0)
			cnt_kol++;
	cout << cnt_kol << endl;
}
