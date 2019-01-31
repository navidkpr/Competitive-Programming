#include <iostream>
#include <queue>
using namespace std;

queue <int> card1, card2;

int Fact(int n)
{
	if (n == 1)
		return 1;
	else
		return Fact(n - 1) * n;
}

int main()
{
	int n, k1, k2;
	cin >> n;
	cin >> k1;
	for (int i = 0; i < k1; i++)
	{
		int num;
		cin >> num;
		card1.push(num);
	}
	cin >> k2;
	for (int i = 0; i < k2; i++)
	{
		int num;
		cin >> num;
		card2.push(num);
	}
	int factn = Fact(n);
	bool h = 0;
	int ans = -1;
	for (int i = 0; i < factn * (n + 1) && !h; i++)
	{
		if ( card1.size() == 0 || card2.size() == 0 )
		{
			h = 1;
			ans = i;
			break;
		}
		if ( card1.front() > card2.front() )
		{
			card1.push(card2.front());
			card1.push(card1.front());
			card1.pop();
			card2.pop();
		}
		else
		{
			card2.push(card1.front());
			card2.push(card2.front());
			card1.pop();
			card2.pop();
		}
	}
	cout << ans;
	if ( !card1.size() )
		cout << &#39; &#39; << 2;
	if ( !card2.size() )
		cout << &#39; &#39; << 1;
	cout << endl;
	return 0;
}
