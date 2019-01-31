#include <iostream>

using namespace std;

string s1, s2;

int f(int s, int e, int l, int r)
{
	if (s == e)
	{
		if (s1[s] == s2[l])
			return 1;
		return 0;
	}
	bool h = 1;
	for (int i = s; i <= e; i++)
		if (s1[i] != s2[i - s + l])
			h = 0;
	if (h)
		return 1;
	if ((e + s) % 2 == 0)
		return 0;
	// cerr << "FUCK" << endl;
	int m1 = (s + e) / 2, m2 = (l + r) / 2;
	if (f(s, m1, l, m2) && f(m1 + 1, e, m2 + 1, r))
		return 1;
	if (f(s, m1, m2 + 1, r) && f(m1 + 1, e, l, m2))
		return 1;
	return 0;
}

int main()
{
	cin >> s1 >> s2;
	if (f(0, s1.size() - 1, 0, s2.size() - 1))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
