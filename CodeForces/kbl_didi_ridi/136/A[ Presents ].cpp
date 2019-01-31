#include <iostream>

using namespace std;

const int MAXN = 1000;
int arr[MAXN], arr2[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		arr[i]--;
	}
	for (int i = 0; i < n; i++)
		arr2[arr[i]] = i;
	for (int i = 0; i < n; i++)
		cout << arr2[i] + 1 << &#39; &#39;;
	cout << endl;
	return 0;
}
