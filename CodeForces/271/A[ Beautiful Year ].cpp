#include <iostream>

using namespace std;

const int MAX = 15;
int a[MAX];

bool check(int n)
{
	for (int i = 0; i < MAX; i++)
		a[i] = 0;
	while (n != 0)
	{
		a[n % 10]++;
		n /= 10;
	}
	for (int i = 0; i < MAX; i++)
		if (a[i] > 1)
			return 0;
	return 1;
}

int main()
{
	int n;
	cin >> n;
	int ans = n + 1;
	while (!check(ans))
		ans++;
	cout << ans << endl;
	return 0;
}
