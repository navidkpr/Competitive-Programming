#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 1000;
int arr[MAXN];

int main()
{
	int n, s;
	cin >> n >> s;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	int sum = 0;
	for (int i = 0; i < n - 1; i++)
		sum += arr[i];
	if (sum <= s)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
