#include <iostream>

using namespace std;

const int MAXN = 1000 + 100;
int arr[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int max_dis = 1;
	for (int i = 0; i < n; i++)
	{
		int s = i, e = i;
		while (s > 0 && arr[s - 1] <= arr[s])
			s--;
		while (e < n - 1 && arr[e + 1] <= arr[e])
			e++;
		max_dis = max(max_dis, e - s + 1);
	}
	cout << max_dis << endl;
	return 0;
}
