#include <iostream>

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN];
int s[MAXN], e[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	s[0] = arr[0];
	e[n - 1] = arr[n - 1];
	for (int i = 1; i < n; i++)
		s[i] = s[i - 1] + arr[i];
	for (int i = n - 2; i >= 0; i--)
		e[i] = e[i + 1] + arr[i];
	int cnt = 0;
	for (int i = 0; i < n - 1; i++)
		if (s[i] == e[i + 1])
			cnt++;
	cout << cnt << endl;
	return 0;
}
