#include <iostream>
#include <vector>
#include <cmath>
#define int long long

using namespace std;

const int MAXN = 1000 + 10;
int arr[MAXN];

vector <int> myvec;

int gcd(int a, int b)
{
	if (a < b)
		swap(a, b);
	if (a % b == 0)
		return b;
	return gcd(b, a % b);
}

void mabna(int n, int k)
{
	while (n)
	{
		myvec.push_back(n % k);
		n /= k;
	}
}

int32_t main()
{
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 2; i < n; i++)
	{
		mabna(n, i);
		for (int j = 0; j < myvec.size(); j++)
			sum += myvec[j];
		myvec.clear();
	}
	int num = gcd(sum, n - 2);
	cout << sum / num << &#39;/&#39; << (n - 2) / num << endl;
	return 0;
}
