#include <iostream>

using namespace std;

const int MAXN = 54321 + 1000;
int f[MAXN];

int main()
{
	long long int n;
	cin >> n;
	cout << ((n - 2) * (n - 3)) + n - 2 << endl;
	return 0;
}
