#include <iostream>

using namespace std;

const int MAXN = 200*1000 + 1000;
int l[MAXN], r[MAXN];
int arr[MAXN];

int main()
{
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < m; i++)
		cin >> l[i] >> r[i];
	int cnt_1 = 0, cnt_2 = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == -1)
			cnt_1++;
		else
			cnt_2++;
	for (int i = 0; i < m; i++)
	{
		if (l[i] % 2 == r[i] % 2)
		{
			cout << 0 << endl; 
			continue;
		}
		int sum = r[i] - l[i] + 1;
		if (cnt_1 < sum / 2 || cnt_2 < sum / 2)
			cout << 0 << endl;
		else
			cout << 1 << endl;
	}
}
