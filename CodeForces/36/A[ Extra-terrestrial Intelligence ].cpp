#include <iostream>
#include <set>
#include <fstream>

using namespace std;

const int MAXN = 1000;
char arr[MAXN];
set <int> st;

int32_t main()
{
	ifstream fin ("input.txt");
	ofstream fout ("output.txt");
	int n;
	fin >> n;
	for (int i = 0; i < n; i++)
		fin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == &#39;0&#39;)
			continue;
		for (int j = i + 1; j < n; j++)
			if (arr[j] == &#39;1&#39;)
			{
				st.insert(j - i - 1);
				break;
			}
	}
	// cerr << st.size() << endl;
	if (st.size() == 0 || st.size() == 1)
		fout << "YES" << endl;
	else
		fout << "NO" << endl;
	return 0;
}
