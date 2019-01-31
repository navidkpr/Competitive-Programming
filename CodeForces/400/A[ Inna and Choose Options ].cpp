#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100 + 10;
vector < pair <int, int> > myvec;
char arr[MAXN][MAXN];

int main()
{
	int n = 12;
	for (int i = 1; i <= 12; i++)
		if (n % i == 0)
			myvec.push_back(make_pair(i, n / i));
	int q;
	cin >> q;
	for (int x = 0; x < q; x++)
	{
		vector <int> vec1;
		string s;
		cin >> s;
		for (int i = 0; i < myvec.size(); i++)
		{
			bool h = 0;
			for (int k = 0; k < myvec[i].second; k++)
			{
				bool g = 1;
				for (int j = 0; j < myvec[i].first; j++)
					if (s[j * myvec[i].second + k] == &#39;O&#39;)
						g = 0;
				h = h | g;
			}
			if (h)
				vec1.push_back(i);
		}
		cout << vec1.size() << &#39; &#39;;
		for (int i = 0; i < vec1.size(); i++)
			cout << myvec[vec1[i]].first << &#39;x&#39; << myvec[vec1[i]].second << &#39; &#39;;
		cout << endl;
	}
}
