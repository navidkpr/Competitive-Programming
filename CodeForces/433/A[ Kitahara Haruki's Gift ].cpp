#include <iostream>

using namespace std;

const int MAXN = 1000;
int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << "NO" << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == 100)
			cnt++;
	if (cnt == 0 && n % 2 == 1)
		cout << "NO" << endl;
	else if (cnt % 2 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
