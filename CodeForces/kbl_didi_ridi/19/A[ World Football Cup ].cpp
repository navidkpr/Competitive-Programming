#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

struct team
{
	int pt, goal, dif;
	string name;
};

const int MAXN = 100;
team t[MAXN];
string name[MAXN];
map <string, int> mp;
string arr[MAXN];

bool operator < (team a, team b)
{
	if (a.pt != b.pt)
		return a.pt < b.pt;
	if (a.dif != b.dif)
		return a.dif < b.dif;
	return a.goal < b.goal;
}

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> name[i];
		mp[name[i]] = i;
		t[i].pt = t[i].goal = t[i].dif = 0;
		t[i].name = name[i];
	}
	for (int i = 0; i < n * (n - 1) / 2; i++)
	{
		string s, t1, t2;
		char c;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
			if (s[i] == &#39;-&#39;)
			{
				t1 = s.substr(0, i);
				t2 = s.substr(i + 1, s.size() - i - 1);
			}
		int p1, p2;
		cin >> p1 >> c >> p2;
		int team_1 = mp[t1];
		int team_2 = mp[t2];
		t[team_1].goal += p1;
		t[team_2].goal += p2;
		t[team_1].dif += p1 - p2;
		t[team_2].dif += p2 - p1;
		if (p1 > p2)
			t[team_1].pt += 3;
		else if (p2 > p1)
			t[team_2].pt += 3;
		else
		{
			t[team_1].pt += 1;
			t[team_2].pt += 1;
		}
	}
	sort(t, t + n);
	for (int i = n / 2; i < n; i++)
		arr[i - n / 2] = t[i].name;
	sort(arr, arr + n / 2);
	for (int i = 0; i < n / 2; i++)
		cout << arr[i] << endl;
	return 0;
}
