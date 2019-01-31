#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string a;
	cin >> a;
	vector <int> s;
	for (int i = 0; i < a.size(); i++)
		s.push_back(a[i] - &#39;0&#39;);
	cin >> a;
	vector <int> t;
	for (int i = 0; i < a.size(); i++)
		t.push_back(a[i] - &#39;0&#39;);
	int end = (s[0] * 10 + s[1]) * 60 + s[3] * 10 + s[4];
	int time = (t[0] * 10 + t[1]) * 60 + t[3] * 10 + t[4];
	end -= time;
	if (end < 0)
		end += 60 * 24;
	cerr << end << endl;
	int hour = end / 60;
	int minuet = end % 60;
	if (hour < 10)
		cout << 0 << hour;
	else
		cout << hour;
	cout << ":";
	if (minuet < 10)
		cout << 0 << minuet;
	else
		cout << minuet;
	cout << endl;
	return 0;
}
