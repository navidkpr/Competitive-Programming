#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100*1000 + 1000;
int l[MAXN], r[MAXN], d[MAXN];

int main()
{
	string s;
	cin >> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> l[i] >> r[i];	
		l[i]--;
		r[i]--;
	}
	if (s[s.size() - 1] == s[s.size() - 2])
		d[s.size() - 2] = 1;
	else
		d[s.size() - 2] = 0;
	for (int i = s.size() - 3; i >= 0; i--)
	{
		if (s[i] == s[i + 1])
			d[i] = d[i + 1] + 1;
		else
			d[i] = d[i + 1];
	}
	for (int i = 0; i < n; i++)
		cout << d[l[i]] - d[r[i]] << endl;
	return 0;	
}
