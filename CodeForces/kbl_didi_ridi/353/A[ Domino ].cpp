#include <iostream>

using namespace std;

const int MAXN = 100 + 10;
pair <int, int> arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		sum1 += arr[i].first;
		sum2 += arr[i].second;
	}
	if ((sum1 + sum2) % 2 != 0)
	{
		cout << -1 << endl;
		return 0;
	}
	if (sum1 % 2 == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	bool h = 0;
	for (int i = 0; i < n; i++)
		if ((arr[i].first + arr[i].second) % 2 != 0)
		{
			h = 1;
			break;
		}
	if (h == 1)
	{
		cout << 1 << endl;
	}
	else
		cout << -1 << endl;
	return 0;
}
