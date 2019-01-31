#include <iostream>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int n = s1.size();
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (s1[i] != s2[i])
			cnt++;
	if ( cnt % 2 != 0 )
	{
		cout << "impossible" << endl;
		return 0;
	}
	bool h = 1;
	for (int i = 0; i < n; i++)
	{
		if ( s1[i] == s2[i] )
			cout << s1[i];
		else if (h == 0)
		{
			cout << s1[i];
			h = 1 - h;
		}
		else
		{
			cout << s2[i];
			h = 1 - h;
		}
	}
	cout << endl;
	return 0;
}
