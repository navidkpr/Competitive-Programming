#include <iostream>

using namespace std;

const int MAX = 100*1000 + 100;
bool mrk[MAX];

int l[MAX], r[MAX];

int main()
{
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> l[i] >> r[i];
	int sum = 0;
	sum += (l[0] - 1) % x;
	for (int i = 1; i < n; i++)
		sum += (l[i] - r[i - 1] - 1) % x;
	// cerr << sum << endl;
	for (int i = 0; i < n; i++)
		sum += r[i] - l[i] + 1;
	cout << sum << endl;
}
