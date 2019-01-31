#include <iostream>

using namespace std;

int cnt[2];

int abs(int n)
{
	if (n < 0)
		return -n;
	return n;
}

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++)
		cnt[s[i] - &#39;0&#39;]++;
	cout << abs(cnt[1] - cnt[0]) << endl;
	return 0;
}
