#include <iostream>
using namespace std;

long long int abs(long long int n) { return ( n < 0? 0 : n ); }

int main()
{
	long long int k, n, w;
	cin >> k >> n >> w;
	cout << abs(w * (w+1) * k / 2 - n) << endl;
	return 0;
}
