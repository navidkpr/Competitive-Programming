#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		while (arr[i] % 2 == 0)
			arr[i] /= 2;
		while (arr[i] % 3 == 0)
			arr[i] /= 3;
	}
	sort(arr, arr + n);
	for (int i = 1; i < n; i++)
		if (arr[i] != arr[i - 1])
		{
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
	return 0;
}
