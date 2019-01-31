#include <iostream>

using namespace std;

const int INF = 1000*1000*1000;

int main(){
	int n;
	cin >> n;
	int max_pt = -INF;
	string max_index;
	for (int i = 0; i < n; i++)
	{
		string name;
		int plus, minus;
		int a, b, c, d, e;
		cin >> name >> plus >> minus >> a >> b >> c >> d >> e;
		int pt = 100 * plus - 50 * minus + a + b + c + d + e;
		max_pt = max(max_pt, pt);
		if (max_pt == pt)
			max_index = name;

	}
	cout << max_index << endl;
	return 0;
}
