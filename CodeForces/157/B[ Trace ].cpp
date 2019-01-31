#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 5*1000 + 100;
long double arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	long double sum = 0, ans = 3.1415926536;
	for (int i = n - 1; i >= 0; i-=2)
	{
		if (i != 0)
			sum += ans * (arr[i] * arr[i] - arr[i - 1] * arr[i - 1]);
		else if (i == 0)
			sum += arr[i] * arr[i] * ans;
	}
	cout << sum << endl;
	return 0;
}
