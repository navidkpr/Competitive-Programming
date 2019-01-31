#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 1000;
int a[MAXN], b[MAXN];

int main()
{
	int n, m;
	cin >> n >> m;	
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a + n);
	sort(b, b + m);
	if (a[n - 1] >= b[0])
	{
		cout << -1 << endl;
		return 0;
	}
	if (a[0] * 2 >= b[0])
	{
		//cerr << b[0] << &#39; &#39; << a[0] << endl;
		cout << -1 << endl;
		return 0;
	}
	cout <<	max(a[n - 1], 2 * a[0]) << endl;
	return 0;
}
