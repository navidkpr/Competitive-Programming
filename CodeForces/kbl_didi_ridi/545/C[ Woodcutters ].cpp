#include <iostream>
using namespace std;

const int MAX = 100000 + 1000;
int d[MAX][2], x[MAX], h[MAX];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> x[i] >> h[i];
	d[0][0] = 1;
	d[0][1] = 1;
	for (int i = 1; i < n; i++)
	{
		if (x[i - 1] + h[i - 1] < x[i])
			d[i][1] = d[i - 1][1] + 1;
		else
			d[i][1] = d[i - 1][0] + 1;
	
		if ( x[i - 1] + h[i - 1] < x[i] )
			d[i][0] = d[i - 1][1];
		else
			d[i][0] = d[i - 1][0];
		if (x[i] - h[i] > x[i - 1])
			if (x[i] - h[i] > x[i - 1] + h[i - 1])
				d[i][0] = max(d[i][0], d[i - 1][1] + 1);
			else
				d[i][0] = max(d[i][0], d[i - 1][0] + 1);
	}
	cout << d[n - 1][1];
}

