#include <map>
#include <iostream>

using namespace std;
const long long LONGINF = LLONG_MAX;
const int INF = INT_MAX;
const int MOD = 1000000007;
const int MAX = 10000;
map<string, int> m, m2;
string names[MAX];
int points[MAX];
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> names[i] >> points[i];
		m[names[i]] += points[i];
	}
	int mx = 0;
	for (int i = 0; i < n; i++)
		mx = max(mx, m[names[i]]);
	int ans;
	for (ans = 0; ((m[names[ans]] < mx) || ((m2[names[ans]] += points[ans]) < mx)); ans++);
	cout << names[ans];
	return 0;
}
