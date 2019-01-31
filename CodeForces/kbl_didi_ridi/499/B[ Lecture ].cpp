#include <iostream>
#include <map>

using namespace std;

map <string, string> mp;

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		if (s1.size() <= s2.size())
			mp[s1] = mp[s2] = s1;
		else 
			mp[s1] = mp[s2] = s2;
	}
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		cout << mp[s] << &#39; &#39;;
	}
	cout << endl;
	return 0;
}
