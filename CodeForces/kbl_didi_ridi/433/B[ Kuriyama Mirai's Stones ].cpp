#include <iostream>
#include <algorithm>
#define int long long

using namespace std;

const int MAXN = 100*1000 + 1000;
int arr[MAXN];
int u[MAXN];
int sum1[MAXN];
int sum2[MAXN];

int32_t main()
{
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		u[i] = arr[i];
	sort(u, u + n);
	// cerr << endl;
	// for (int i = 0; i < n; i++)
	// 	cerr << u[i] << &#39; &#39;;
	// cerr << endl;
	sum1[0] = arr[0];
	for (int i = 1; i < n; i++)
		sum1[i] = sum1[i - 1] + arr[i];
	// cerr << endl;
	// for (int i = 0; i < n; i++)
	// 	cerr << sum1[i] << &#39; &#39;;
	// cerr << endl;
	sum2[0] = u[0];
	for (int i = 1; i < n; i++)
		sum2[i] = sum2[i - 1] + u[i];
	// cerr << endl;
	// for (int i = 0; i < n; i++)
	// 	cerr << sum2[i] << &#39; &#39;;
	// cerr << endl;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int num1, num2, num3;
		cin >> num1 >> num2 >> num3; num2--; num3--;
		if (num1 == 1)
			cout << sum1[num3] - sum1[num2 - 1] << endl;
		else
			cout << sum2[num3] - sum2[num2 - 1] << endl;
	}
}
