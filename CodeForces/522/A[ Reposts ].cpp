#include <iostream>
#include <map>

using namespace std;

const int MAXN = 1000;
int d[MAXN];
map <string, int > mp;

string make_right(string s)
{
	for (int i = 0; i < s.size(); i++)
		if (s[i] <= &#39;Z&#39; && s[i] >= &#39;A&#39;)
			s[i] = s[i] - &#39;A&#39; + &#39;a&#39;;
	return s;
}

int32_t main()
{
	int n;
	cin >> n;
	mp["polycarp"] = 0;
	d[0] = 1;
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		string s1, chert, s2;
		cin >> s1 >> chert >> s2;
		s1 = make_right(s1);
		s2 = make_right(s2);
		mp[s1] = cnt;
		d[cnt++] = d[mp[s2]] + 1;
	}
	int max_d = 0;
	for (int i = 0; i <= n; i++)
		max_d = max(max_d, d[i]);
	cout << max_d << endl;
	return 0;
}
