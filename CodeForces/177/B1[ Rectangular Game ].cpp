#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long long ans = 0;
	for(int i = 2; i * i <= n; i++)
		while(n % i == 0)
		{
			ans += n;
			n /= i;
		}
	if (n > 1)
		ans += n;
	cout << ans + 1 << endl;
}
