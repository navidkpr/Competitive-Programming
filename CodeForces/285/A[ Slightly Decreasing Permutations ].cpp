#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN  = 100*1000;
int arr[MAXN];

int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		arr[i] = i + 1;
	reverse(arr, arr + k + 1);
	for (int i = 0; i < n; i++)
		cout << arr[i] << &#39; &#39;;
	cout << endl;
	return 0;
}
