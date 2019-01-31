#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int MAXN = 500*1000 + 1000;
long long int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	long long int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];

	if (sum % 3 != 0)
	{
		cout << 0 << endl;
		return 0;
	}

	vector <long long int> s_sum, e_sum;
	long long int ans = 0;

	for (int i = 0; i < n; i++)
	{
		ans += arr[i];
		if (ans == sum / 3)
			s_sum.push_back(i);
	}
	ans = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		ans += arr[i];
		if (ans == sum / 3)
			e_sum.push_back(i);
	}
	if (s_sum.size() == 0)
	{
		cout << 0 << endl;
		return 0;
	}

	long long int cnt = 0;

	reverse(e_sum.begin(), e_sum.end());
	for (int i = 0; i < s_sum.size(); i++)
		cnt += e_sum.end() - upper_bound(e_sum.begin(), e_sum.end(), s_sum[i] + 1);
	cout << cnt << endl;
	return 0;
}
