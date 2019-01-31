#include <iostream>

using namespace std;

const int MAXN = 1000;
int arr[MAXN];

int main()
{
	int n, d;
	cin >> n >> d;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	if (sum + (n - 1) * 10 > d)
		cout << -1 << endl;
	else
		cout << (d - sum) / 5 << endl;
}
