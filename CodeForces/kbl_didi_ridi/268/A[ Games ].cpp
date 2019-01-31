#include <iostream>

using namespace std;

const int MAXN = 100;
pair <int, int> arr[MAXN];

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;
	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i != j && arr[i].first == arr[j].second)
				cnt++;
		}
	cout << cnt << endl;
	return 0;
}
