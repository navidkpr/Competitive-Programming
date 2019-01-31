#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[10];
int mrk[10];

int main()
{
	int n = 6;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		mrk[arr[i]]++;
	bool h = 0;
	for (int i = 0; i < 10; i++)
		if (mrk[i] >= 4)
		{
			h = 1;
			mrk[i] -= 4;
		}
	if (h == 1)
	{
		for (int i = 0; i < 10; i++)
			if (mrk[i] == 2)
			{
				cout << "Elephant" << endl;
				return 0;
			}
		cout << "Bear" << endl;
	}
	else
		cout << "Alien" << endl;
}
