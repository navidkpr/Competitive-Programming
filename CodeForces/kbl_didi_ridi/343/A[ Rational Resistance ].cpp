#include <iostream>
#define int long long

using namespace std;

int32_t main()
{
	int a, b, sum = 0;
	cin >> a >> b;
	while(b)
	{
		sum += a / b;
		a %= b;
		swap(a, b);
	}
	cout << sum << endl;
	return 0;
}
