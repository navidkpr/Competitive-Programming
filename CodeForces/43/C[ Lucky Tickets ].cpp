#include <iostream>

using namespace std;

int cnt[3];

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		cnt[num % 3]++;
	}
	int sum = 0;
	sum += min(cnt[1], cnt[2]);
	sum += cnt[0] / 2;
	cout << sum << endl;
	return 0;
}
