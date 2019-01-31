#include <iostream>

using namespace std;

const int MAXN = 1000;
int a[MAXN], b[MAXN];
int hap1[MAXN], hap2[MAXN];
bool mrk_1[MAXN], mrk_2[MAXN];

int main()
{
	int n, m;
	cin >> n >> m;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int num2;
		cin >> num2;
		mrk_1[num2] = 1;
	}
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int num2;
		cin >> num2;
		mrk_2[num2] = 1;
	}
	for (int i = 0; i < n * m * 2; i++)
		if (mrk_1[i % n] || mrk_2[i % m])
			mrk_1[i % n] = mrk_2[i % m] = 1;
	bool h = 1;
	for (int i = 0; i < n; i++)
		if (!mrk_1[i])
			h = 0;
	for (int i = 0; i < m; i++)
		if (!mrk_2[i])
			h = 0;
	if (h)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
