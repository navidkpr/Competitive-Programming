#include <iostream>

using namespace std;

const int MAXN = 100*1000;
int arr[MAXN];

int main()
{
	int n, t;
	cin >> n >> t;
	for (int i = 1; i < n; i++)
		cin >> arr[i];
	int pt = 1;
	while (pt < t)
		pt += arr[pt];
	if (pt == t)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
