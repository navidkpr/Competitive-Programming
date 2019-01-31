#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const int MAXN = 1000 + 100;
double x[MAXN], y[MAXN];

int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	double sum = 0;
	for (int i = 0; i < n - 1; i++)
		sum += sqrt(pow(x[i + 1] - x[i], 2) + pow(y[i + 1] - y[i], 2));
	cout << setprecision(8) << sum / 50 * k << endl;
	return 0;
}
