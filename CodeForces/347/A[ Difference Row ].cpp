#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100 + 10;
int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	cout << arr[n - 1] << &#39; &#39;;
	for (int i = 1; i < n - 1; i++)
		cout << arr[i] << &#39; &#39;;
	cout << arr[0] << endl;
	return 0;
}
