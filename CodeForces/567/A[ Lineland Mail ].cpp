#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int MAXN = 100*1000 + 1000;
pair <int, int> arr[MAXN];
int min_index[MAXN];
int max_index[MAXN];

int abs(int n)
{
	if (n < 0)
		return -n;
	return n;
}

int main()
{
	int n; 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i;
	}
	sort(arr, arr + n);
	min_index[arr[0].second] = arr[1].first - arr[0].first;
	max_index[arr[0].second] = arr[n - 1].first - arr[0].first;
	min_index[arr[n - 1].second] = arr[n - 1].first - arr[n - 2].first;
	max_index[arr[n - 1].second] = arr[n - 1].first - arr[0].first;
	for (int i = 1; i < n - 1; i++)
		min_index[arr[i].second] = min(abs(arr[i].first - arr[i + 1].first), abs(arr[i].first - arr[i - 1].first));
	for (int i = 1; i < n - 1; i++)
		max_index[arr[i].second] = max(abs(arr[i].first - arr[0].first), abs(arr[i].first - arr[n - 1].first));
	for (int i = 0; i < n; i++)
		cout << min_index[i] << &#39; &#39; << max_index[i] << endl;
	return 0;
}
