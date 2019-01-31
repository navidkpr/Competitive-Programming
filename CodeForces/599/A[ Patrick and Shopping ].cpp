#include <iostream>

using namespace std;

const int INF = 1000*1000*1000;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int min_d = INF;
	min_d = min(min_d, a + b + c);
	min_d = min(min_d, 2 * a + 2 * b);
	min_d = min(min_d, 2 * b + 2 * c);
	min_d = min(min_d, 2 * a + 2 * c);
	cout << min_d << endl;
}
