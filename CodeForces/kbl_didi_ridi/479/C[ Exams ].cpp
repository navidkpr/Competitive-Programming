#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 5*1000 + 100;
pair <int, int> arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;
	sort(arr, arr + n);
	int max_date = 0;
	for (int i = 0; i < n; i++)
		if (min(arr[i].first, arr[i].second) >= max_date)
			max_date = max(max_date, min(arr[i].first, arr[i].second));
		else 
			max_date = max(max_date, max(arr[i].first, arr[i].second));
	cout << max_date << endl;
	return 0;
}
