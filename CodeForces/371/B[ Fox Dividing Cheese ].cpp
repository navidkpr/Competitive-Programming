#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1000*1000;
int cnt[2][10];
int arr[3] = {2, 3, 5};

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < 3; i++)
		while (n % arr[i] == 0)
		{
			// cerr << n << endl;
			n /= arr[i];
			cnt[0][arr[i]]++;
		}
	for (int i = 0; i < 3; i++)
		while (m % arr[i] == 0)
		{
			// cerr << m << endl;
			m /= arr[i];
			cnt[1][arr[i]]++;
		}
	if (n != m)
	{
		cout << -1 << endl;
		return 0;
	}
	int sum = 0;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 2; j++)
			sum += cnt[j][i] - min(cnt[j][i], cnt[1 - j][i]);
	cout << sum << endl;
}
