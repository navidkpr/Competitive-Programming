#include <iostream>

using namespace std;

int main()
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int min1 = a * n;
	min1 = min(min1, ((n + m - 1) / m) * b);
	min1 = min(min1, (n / m) * b + (n - ((n / m) * m)) * a);
	cout << min1;
}
