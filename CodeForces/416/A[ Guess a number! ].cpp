#include <iostream>

using namespace std;

const int INF = 2*1000*1000*1000;
const int MAXN = 100*1000;
int l = -INF, r = INF;

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		int num;
		char c;
		cin >> s >> num >> c;
		if (c == &#39;N&#39;)
		{
			if (s == ">")
				s = "<=";
			else if (s == "<")
				s = ">=";
			else if (s == ">=")
				s = "<";
			else
				s = ">";
		}
		if (s == ">")
			num++;
		if (s == ">=" || s == ">")
		{
			if (num > r)
			{
				cout << "Impossible" << endl;
				return 0;
			}
			else
				l = max(l, num);
		}
		if (s == "<")
			num--;
		if (s == "<=" || s == "<")
		{
			if (num < l)
			{
				cout << "Impossible" << endl;
				return 0;
			}
			else
				r = min(num, r);
		}
	}
	cout << l << endl;
}
