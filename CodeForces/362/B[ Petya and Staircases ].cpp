#include <iostream>
#include <algorithm>

using namespace std;

const int MAXK = 3*1000 + 1000;
int arr[MAXK];

int main()
{
	int n, k; cin >> n >> k;
	for (int i = 0; i < k; i++)
		cin >> arr[i];
	sort(arr, arr + k);
	if (arr[0] == 1 || arr[k - 1] == n)
	{
		cout << "NO" << endl;
		return 0;
	}
	for (int i = 0; i < k; i++)
		cerr << arr[i] << &#39; &#39;;
	cerr << endl;
	for (int i = 2; i < k; i++)
		if (arr[i] == arr[i - 1] + 1 && arr[i - 1] == arr[i - 2] + 1)
		{
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
	return 0;
}
