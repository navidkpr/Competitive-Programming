#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100 + 10;
int cnt[MAX];
string s[MAX];

int main()
{
	int n = 4, k;
	cin >> k;
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (s[i][j] != &#39;.&#39;)
				cnt[s[i][j] - &#39;0&#39;]++;
		}
	for (int i = 0; i < MAX; i++)
		if (cnt[i] > 2 * k)
		{
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
	return 0;
}
