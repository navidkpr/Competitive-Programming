#include <iostream>
#include <set>

using namespace std;

multiset < pair <int, int> > st;

int main()
{
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		cnt += num / 10;
		if (num < 100)
		st.insert(make_pair(num % 10, num));
	}
	while (st.size() > 0 && (*st.rbegin()).first != 0 && k > 0)
	{
		pair <int, int> num = *st.rbegin();
		st.erase(st.find(num));
		num.first++;
		num.second++;
		if (num.first == 10)
			cnt++;
		num.first %= 10;
		if (num.second < 100)
			st.insert(num);
		k--;
	}
	while (st.size() > 0)
	{
		pair <int, int> num = *st.begin();
		st.erase(st.find(num));
		while (num.second < 100 && k > 0)
		{
			k--;
			num.second++;
			num.first = (num.first + 1) % 10;
			if (num.first == 0)
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
