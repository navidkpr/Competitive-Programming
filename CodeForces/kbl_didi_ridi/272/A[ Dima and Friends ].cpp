#include <iostream>

using namespace std;

const int MAXN = 100 + 10;
int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int sum = 0, cnt = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	for (int i = 1; i <= 5; i++)
		if ((sum + i) % (n + 1) == 1)
			cnt++;
	cout << 5 - cnt << endl;
	return 0;
}
