#include <iostream>

using namespace std;

char row[2], col[2];

int abs(int n)
{
	if (n < 0)
		return -n;
	return n;
}

int main()
{
	cin >> col[0] >> row[0] >> col[1] >> row[1];
	cout << max(abs((int)row[0] - (int)row[1]), abs((int)col[0] - (int)col[1])) << endl;
	while (row[0] != row[1] || col[0] != col[1])
	{
		if (col[0] > col[1])
		{
			col[0]--;
			cout << &#39;L&#39;;
		}
		if (col[1] > col[0])
		{
			col[0]++;
			cout << &#39;R&#39;;
		}
		if (row[0] > row[1])
		{
			row[0]--;
			cout << &#39;D&#39;;
		}
		if (row[1] > row[0])
		{
			row[0]++;
			cout << &#39;U&#39;;
		}
		cout << endl;
	}
}
