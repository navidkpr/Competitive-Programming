#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 300*1000 + 100;
int arr[MAXN];

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
		cin >> arr[i];
	sort(arr, arr + n);
	long long int sum = 0;
	for (int i = 0; i < n; i++)
		sum += abs(arr[i] - i - 1);
	cout << sum << endl;
	return 0;
}
