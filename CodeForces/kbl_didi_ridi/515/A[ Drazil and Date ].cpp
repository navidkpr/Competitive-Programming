#include <iostream>

using namespace std;

long long int abs(long long int n)
{
	return (n < 0? -n: n);
}

int main()
{
	long long int a, b, s;
	cin >> a >> b >> s;
	if(s >= abs(a) + abs(b) && (s % 2) == (abs(a) + abs(b)) % 2)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
}
