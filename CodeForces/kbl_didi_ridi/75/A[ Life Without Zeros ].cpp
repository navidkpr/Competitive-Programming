#include <iostream>
#include <vector>

using namespace std;

vector <int> vec1, vec2;

int give_num(int n)
{
	vector <int> myvec;
	int num = 0;
	while (n != 0)
	{
		if (n % 10 != 0)
			myvec.push_back(n % 10);
		n /= 10;
	}
	for (int i = myvec.size() - 1; i >= 0; i--)
	{
		num *= 10;
		num += myvec[i];
	}
	return num;
}

int main()
{
	int a, b, c;
	cin >> a >> b;
	c = a + b;
	if (give_num(a) + give_num(b) == give_num(c))
	{
		cout << "YES" << endl;
		return 0;
	}
	else 
		cout << "NO" << endl;
	return 0;
}
