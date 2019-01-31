#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 1000 + 100;
int arr[MAXN];

int main()
{
	int n, m,  d;
	cin >> n >> d;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> m;
	sort(arr, arr + n);
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (m > 0)
		{
			sum += arr[i];
			m--;
		}
	sum -= d * m;
	cout << sum << endl;
	return 0;
}
