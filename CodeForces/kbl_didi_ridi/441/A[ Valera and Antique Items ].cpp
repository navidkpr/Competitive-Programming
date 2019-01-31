#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100;
vector <int> item[MAXN];

int main()
{
	int n, v;
	cin >> n >> v;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		for (int j = 0; j < k; j++)
		{
			int num;
			cin >> num;
			item[i].push_back(num);
		}
	}
	vector <int> myvec;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < item[i].size(); j++)
			if (v > item[i][j])
			{
				myvec.push_back(i + 1);
				break;
			}
	cout << myvec.size() << endl;
	for (int i = 0; i < myvec.size(); i++)
		cout << myvec[i] << &#39; &#39;;
}
