#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100*1000 + 1000;
long long int c[MAXN];

int main()
{
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> c[i];
	sort(c, c + n);
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += c[i] * x;
		x = max(1, x - 1);
	}
	cout << sum << endl;
}
