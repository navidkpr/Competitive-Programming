#include <iostream>

using namespace std;

int main()
{
	long long int n, m, k;
	cin >> n >> m >> k;
	long long int num = n * m * k;
	for (long long int i = 0; i * i <= num; i++)
		if (i * i == num)
			num = i;
	cout << 4 * ((num / n) + (num / m) + (num / k)) << endl;	
}
