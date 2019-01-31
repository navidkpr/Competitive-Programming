#include <iostream>

using namespace std;

const int INF = 1000*1000*1000;
const int MAXN = 1000;
int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int min1 = arr[0], max1 = arr[0];
	for (int i = 0; i < n; i++)
	{
		max1 = max(max1, arr[i]);
		min1 = min(min1, arr[i]);
	}
	int cnt = 0;
	int min_index, max_index;
	for (int i = 0; i < n; i++)
		if (arr[i] == max1)
		{
			max_index = i;
			cnt += i;
			break;
		}
	for (int i = n - 1; i >= 0; i--)
		if (arr[i] == min1)
		{
			min_index = i;
			cnt += n - 1 - i;
			break;
		}
	if (min_index < max_index)
		cnt--;
	cout << cnt << endl;
	return 0;
}
