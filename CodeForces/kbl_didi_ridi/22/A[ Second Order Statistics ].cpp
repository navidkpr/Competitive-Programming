#include <iostream>
#include <set>

using namespace std;

set <int> st;

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		st.insert(num);
	}
	if (st.size() < 2)
		cout << "NO" << endl;
	else
		cout << *(++st.begin()) << endl;
	return 0;
}
