#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	cout << min(n, m) << &#39; &#39; << (max(n, m) - min(n, m)) / 2 << endl;
}
