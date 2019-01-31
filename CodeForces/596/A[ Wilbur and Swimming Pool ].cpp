#include <iostream>

using namespace std;

const int MAXN = 10;
pair <int, int> arr[MAXN];

int abs(int n) { return (n < 0? -n : n); }

void output(int x, int y)
{
	cout << (abs(arr[x].first - arr[y].first) * abs(arr[x].second - arr[y].second)) << endl;
	return;
}

int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;
	// sort(arr, arr + n);
	if (n == 1)
	{
		cout << -1 << endl;
		return 0;
	}
	if (n >= 3)
	{
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++)
				if (arr[i].first != arr[j].first && arr[i].second != arr[j].second)
				{
					output(i, j);
					return 0;
				}
	}
	if (n == 2 && arr[0].first != arr[1].first && arr[0].second != arr[1].second)
		output(0, 1);
	else
		cout << -1 << endl;
	return 0;
}
