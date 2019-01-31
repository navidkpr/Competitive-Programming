#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 3*1000 + 100;
int a[MAXN];

int main()
{
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	bool h = 1;
	while ( h )
	{
		h = 0;
		for (int i = n - 1; i > 0; i--)
			if ( a[i] == a[i - 1] )
			{
				h = 1;
				a[i]++;
				cnt++;
			}
	}
	cout << cnt << endl;
}
