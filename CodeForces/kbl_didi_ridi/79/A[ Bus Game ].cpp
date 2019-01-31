#include <iostream>

using namespace std;

int32_t main()
{
	int x, y;
	cin >> x >> y;
	bool h = 0;
	while (1)
	{
		if (!h)
		{
			if (x >= 2 && y >= 2)
			{
				x -= 2;
				y -= 2;
			}
			else if (x >= 1 && y >= 12)
			{
				x -= 1;
				y -= 12;
			}
			else if (y >= 22)
			{
				y -= 22;
			}
			else
			{
				cout << "Hanako" << endl;
				return 0;
			}
		}
		else
		{
			if (y >= 22)
				y -= 22;
			else if (y >= 12 && x >= 1)
			{
				y -= 12;
				x -= 1;
			}
			else if (y >= 2 && x >= 2)
			{
				y -= 2;
				x -= 2;
			}
			else
			{
				cout << "Ciel" << endl;
				return 0;
			}
		}
		h = 1 - h;
	}
}
