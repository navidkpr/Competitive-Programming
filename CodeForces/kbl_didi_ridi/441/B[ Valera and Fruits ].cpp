#include <iostream>
#define int long long

using namespace std;

const int MAXN = 3*1000 + 100;
int arr[MAXN];

int32_t main()
{
	int n, v;
	cin >> n >> v;
	int max_day = 0;
	for (int i = 0; i < n; i++)
	{
		int num1, num2;
		cin >> num1 >> num2;
		max_day = max(max_day, num1);
		arr[num1] += num2;
	}
	int ans = 0;
	int sum = 0;
	for (int i = 1; i <= max_day + 1; i++)
	{
		int num = min(v, ans);
		sum += num;
		num = min(v - num, arr[i]);
		arr[i] -= num;
		sum += num;
		ans = arr[i];
		// cerr << ans << endl;
	}
	cout << sum << endl;
	return 0;
}
