#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 200*1000;
int arr[MAXN];
int cnt[MAXN];
bool mrk[MAXN];

int main()
{
	string s;
	int m;
	cin >> s >> m;
	int n = (int)s.size();
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
		arr[i]--;
		cnt[arr[i]]++;
	}
	for (int i = 1; i < n / 2; i++)
		cnt[i] += cnt[i - 1];
	for (int i = 0; i < n / 2; i++)
		cnt[i] %= 2;
	for (int i = 0; i < n / 2; i++)
		if (cnt[i] == 1)
			swap(s[i], s[n - i - 1]);
	cout << s << endl;
	return 0;
}
