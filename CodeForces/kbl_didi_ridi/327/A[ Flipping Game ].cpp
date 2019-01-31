#include <iostream>
using namespace std;

const int MAX = 100 + 50;
bool a[MAX];
int d[MAX][MAX];

int main()
{
	int n, num1 = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 1)
			num1++;
	}
	for (int i = 0; i < n; i++)
		d[i][i] = (a[i] == 0? 1 : -1);
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			d[i][j] = d[i][j - 1] + d[j][j];
	int max = -100000000;
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if (d[i][j] > max)
				max = d[i][j];
	cout << num1 + max << endl;
	return 0;
			
}
