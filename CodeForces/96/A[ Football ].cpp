#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int cnt = 1;
	char ans = s[0];
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] == ans)
			cnt++;
		else
		{
			ans = s[i];
			cnt = 1;
		}
		//cerr << i + 1 << " :: " << cnt << endl;
		if (cnt >= 7)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
