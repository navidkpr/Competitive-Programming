#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> lucky;
	for (int i = 1; i <= n; i++)
	{
		bool h = 1;
		int num = i;
		while (num != 0)
		{
			if ((num % 10 != 7) && (num % 10 != 4))
			{
				h = 0;
				break;
			}
			num /= 10;
		}
		if (h)
			lucky.push_back(i);
	}
	for (int i = 0; i < lucky.size(); i++)
		if (n % lucky[i] == 0)
		{
			cout << "YES" << endl;
			return 0;
		}
	cout << "NO" << endl;
	return 0;
}
