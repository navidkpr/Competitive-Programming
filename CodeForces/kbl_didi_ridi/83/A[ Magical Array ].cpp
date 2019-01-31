#include <iostream>
#define int long long

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int cnt_ans = 1;
	int sum = n;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] == arr[i - 1])
			cnt_ans++;
		else
		{
			sum += cnt_ans * (cnt_ans - 1) / 2;
			cnt_ans = 1;
		}
	}
	// cerr << sum << endl;
	// cerr << cnt_ans << endl;
	if (cnt_ans > 1)
		sum += cnt_ans * (cnt_ans - 1) / 2;
	cout << sum << endl;
	return 0;
}
