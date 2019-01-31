#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		if (s[i] != &#39;4&#39; && s[i] != &#39;1&#39;)
		{
			cout << "NO" << endl;
			return 0;
		}
	int cnt = 0;
	if (s[0] == &#39;4&#39;)
	{
		cout << "NO" << endl;
		return 0;
	}
	for (int i = 0; i < s.size(); i++)
		if (s[i] == &#39;4&#39;)
			cnt++;
		else if (s[i] == &#39;1&#39;)
		{
			if (cnt > 2)
			{
				cout << "NO" << endl;
				return 0;
			}
			cnt = 0;
		}
	if (cnt > 2)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	return 0;
}
