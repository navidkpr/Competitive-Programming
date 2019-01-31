#include <iostream>

using namespace std;

const int MAXN = 10;
char c[MAXN][MAXN];
int pt1, pt2;

int main()
{
	int n = 8;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> c[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (c[i][j] == &#39;q&#39;)
				pt2 += 9;
			if (c[i][j] == &#39;Q&#39;)
				pt1 += 9;
			if (c[i][j] == &#39;r&#39;)
				pt2 += 5;
			if (c[i][j] == &#39;R&#39;)
				pt1 += 5;
			if (c[i][j] == &#39;b&#39;)
				pt2 += 3;
			if (c[i][j] == &#39;B&#39;)
				pt1 += 3;
			if (c[i][j] == &#39;n&#39;)
				pt2 += 3;
			if (c[i][j] == &#39;N&#39;)
				pt1 += 3;
			if (c[i][j] == &#39;p&#39;)
				pt2 += 1;
			if (c[i][j] == &#39;P&#39;)
				pt1 += 1;
		}
	if (pt1 > pt2)
		cout << "White" << endl;
	else if (pt1 == pt2)
		cout << "Draw" << endl;
	else 
		cout << "Black" << endl;
	return 0;
	
}
