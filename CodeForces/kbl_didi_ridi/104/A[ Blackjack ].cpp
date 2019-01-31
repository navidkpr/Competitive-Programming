#include <iostream>
#include <vector>

using namespace std;

vector <int> myvec;

int main()
{
	int n; cin >> n;
	for (int i = 1; i <= 11; i++)
		myvec.push_back(i);
	for (int i = 0; i < 3; i++)
		myvec.push_back(10);
	int cnt = 0;
	for (int i = 0; i < myvec.size(); i++)
		if (myvec[i] == n - 10)
			cnt += 4;
	if (n == 20)
		cnt--;
	cout << cnt << endl;
	return 0;
}
