#include <iostream> 
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

vector < pair <int, string> > myvec;

int main()
{
	int n;
	cin >> n;
	string s1, s2;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		bool h = 0;
		for (int j = 0; j < myvec.size(); j++)
			if (myvec[j].second == s)
			{
				h = 1;
				myvec[j].first++;
			}
		if (!h)
		{
			myvec.push_back(make_pair(1, s));
		}
	}
	sort(myvec.begin(), myvec.end());
	cout << myvec[myvec.size() - 1].second << endl;
	return 0;
}
