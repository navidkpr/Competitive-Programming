#include <iostream>

using namespace std;

int main()
{
	long long int n, m, a;
	cin >> n >> m >> a;
	if (n % a != 0 && m % a != 0)
		cout << ((n / a) + (m / a))+ 1 + (n - (n % a)) * (m - (m % a)) / (a * a);
	else if (n % a != 0 && m % a == 0)
		cout << (m / a) * (n / a + 1);
	else if (n % a == 0 && m % a != 0)
		cout << (m / a + 1) * (n / a);
	else 
		cout << n * m / (a * a);
	return 0;
}
