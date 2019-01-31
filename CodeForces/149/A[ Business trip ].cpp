#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 20;
int arr[MAXN];

bool cmp(int a, int b)
{
	return b < a;
}

int main()
{
	int n, k;
	cin >> k;
	n = 12;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n, cmp);
	int sum = 0;
	int pt = 0;
	while (pt < 12)
	{
		if (sum >= k)
		{
			cout << pt << endl;
			return 0;
		}
		sum += arr[pt];
		pt++;
	}
	if (sum >= k)
		cout << 12 << endl;
	else
		cout << -1 << endl;
	return 0;
}
