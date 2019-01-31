#include <iostream>

using namespace std;

int d[100];

int main()
{
	char c1, c2;
	cin >> c1 >> c2;
	d[0] = 2;
	d[1] = 7;
	d[2] = 2;
	d[3] = 3;
	d[4] = 3;
	d[5] = 4;
	d[6] = 2;
	d[7] = 5;
	d[8] = 1;
	d[9] = 2;
	cout << d[c1 - &#39;0&#39;] * d[c2 - &#39;0&#39;] << endl;
	return 0;
}
