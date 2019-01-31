#include <iostream>
#include <algorithm>

using namespace std;

string s1[3];

int main()
{
	string s, t;
	cin >> s >> t;
	int n = s.size();
	for (int i = 0; i < n; i++)
		if (s[i] == t[i])
			continue;
		else if (s[i] < t[i])
			break;
		else 
		{
			cout << "No such string" << endl;
			return 0;
		}
	for (int i = n - 1; i >= 0; i--)
		if (s[i] != &#39;z&#39;)
		{
			s1[0] = s;
			s1[1] = t;
			s1[2] = s;
			s1[2][i] = s1[2][i] + 1;
			string ans = s1[2];
			sort(s1, s1 + 3);
			if (s1[1] == ans && s1[1] != s1[0] && s1[1] != s1[2])
			{
				cout << s1[1] << endl;
				return 0;
			}
		}
	for (int i = n - 1; i >= 0; i--)
		if (t[i] != &#39;a&#39;)
		{
			s1[0] = s;
			s1[1] = t;
			s1[2] = t;
			s1[2][i] = s1[2][i] - 1;
			string ans = s1[2];
			sort(s1, s1 + 3);
			if (s1[1] == ans && s1[1] != s1[0] && s1[1] != s1[2])
			{
				cout << s1[1] << endl;
				return 0;
			}
		}
	cout << "No such string" << endl;
	return 0;
}
