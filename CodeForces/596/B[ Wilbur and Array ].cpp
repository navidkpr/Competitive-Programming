#include <iostream>

using namespace std;

const int MAXN = 200*1000 + 1000;
long long int a[MAXN], b[MAXN];

int abs(int n)
{
	if (n < 0)
		return -n;
	else
		return n;
}

long long int cnt = 0;

int main()
{
	ios::sync_with_stdio(0);
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		a[i] = 0;
	for (int i = 0; i < n; i++)
		cin >> b[i];
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		// cerr << a[i] << &#39; &#39;;
		a[i] += cnt;
		sum += abs(a[i] - b[i]);
		cnt += b[i] - a[i];
		// for (int j = n - 1; j >= i; j--)
		// {
			// a[j] -= a[i] - b[i];
		// }
	}
	// cerr << endl;
	cout << sum << endl;
	return 0;
}
