#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int cnt = 0;
	for (int i = 0; i <= 40; i++)
		for (int j = 0; j <= 40; j++)
			if (i * i + j == n && j * j + i == m)
				cnt++;
	cout << cnt << endl;
	return 0;
}
