#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n * n / 2; i++)
		cout << i << &#39; &#39; << n * n - i + 1 << endl;
}
