#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int max_num = n;
	max_num = max(max_num, n / 10);
	max_num = max(max_num, (n / 100) * 10 + (n % 10));
	cout << max_num << endl;
	return 0;
}
