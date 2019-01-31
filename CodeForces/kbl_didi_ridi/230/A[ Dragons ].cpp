#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100 * 1000;
pair <int, int> dragon[MAXN];

int main()
{
	int s, n;
	cin >> s >> n;
	for (int i = 0; i < n; i++)
		cin >> dragon[i].first >> dragon[i].second;
	sort(dragon, dragon + n);
	for (int i = 0; i < n; i++)
		if (s <= dragon[i].first)
		{
			cout << "NO" << endl;
			return 0;
		}
		else
			s += dragon[i].second;
	cout << "YES" << endl;
	return 0;
}
