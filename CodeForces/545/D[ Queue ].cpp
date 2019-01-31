#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100000 + 100;
int a[MAX];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int cnt = 0, pt = 0;
	long long int sum = 0;
	while ( pt < n )
	{
		sum += a[pt];
		pt++;
		cnt++;
		while ( pt < n && sum > a[pt] )
			pt++;
	}
	cout << cnt << endl;
	return 0;
}
