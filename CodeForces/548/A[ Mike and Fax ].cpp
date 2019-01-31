#include <iostream>
using namespace std;

string s;

bool check(int st, int e)
{
	for (int i = st; i <= e; i++)
		if ( s[i] != s[e - i + st] )
			return 0;
	return 1;
}

int main()
{
	int k;
	cin >> s >> k;
	if ( s.size() % k )
	{
		cout << "NO" << endl;
		return 0;
	}
	bool h = 1;
	int n = s.size();
	for (int i = 0; i < n; i+=n/k)
	{	
		if ( !check(i, i + n/k - 1) )
		{	
			h = 0;
			break;
		}
	}
	if (h == 0)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	return 0;
}
