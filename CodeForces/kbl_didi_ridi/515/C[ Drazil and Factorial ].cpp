#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> myvec;
vector <int> tabdil[10];

int main()
{
	tabdil[4].push_back(2);
	tabdil[4].push_back(2);
	tabdil[4].push_back(3);
	tabdil[6].push_back(5);
	tabdil[6].push_back(3);
	tabdil[8].push_back(2);
	tabdil[8].push_back(2);
	tabdil[8].push_back(2);
	tabdil[8].push_back(7);
	tabdil[9].push_back(7);
	tabdil[9].push_back(3);
	tabdil[9].push_back(3);
	tabdil[9].push_back(2);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char c;
		cin >> c;
		myvec.push_back(c - &#39;0&#39;);
	}
	sort(myvec.begin(), myvec.end());
	int pt = 0;
	while (myvec[pt] < 2)
	{
		pt++;
	}
	vector <int> javab;
	for (int i = pt; i < myvec.size(); i++)
		if (!tabdil[myvec[i]].empty())
			for (int j = 0; j < tabdil[myvec[i]].size(); j++)
				javab.push_back(tabdil[myvec[i]][j]);
		else
			javab.push_back(myvec[i]);
	sort(javab.begin(), javab.end());
	for (int i = javab.size() - 1; i >= 0; i--)
		cout << javab[i];
	cout << endl;
	return 0;
}
