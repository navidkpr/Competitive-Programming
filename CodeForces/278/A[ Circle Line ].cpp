#include <iostream>

using namespace std;

const int MAXN = 1000;
const int INF = 100*1000*1000;
int d[MAXN];

int main()
{
	int n, s, t;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> d[i];
	cin >> s >> t;
	if (s > t)
		swap(s, t);
	int sum = 0;
	int min_sum = INF;
	for (int i = 0; i < s - 1; i++)
		sum += d[i];
	for (int i = t - 1; i < n; i++)
		sum += d[i];
	min_sum = min(min_sum, sum);
	sum = 0;
	for (int i = s - 1; i < t - 1; i++)
		sum += d[i];
	min_sum = min(min_sum, sum);
	cout << min_sum << endl;
	return 0;
}
