#include <iostream>
using namespace std;


int main()
{
	int k;
	cin >> k;
	string s[4] = {"|", "|", "|", "|"};
	if (k >= 1)
		s[0] += "O.";
	if (k >= 2)
		s[1] += "O.";
	if (k >= 3)
		s[2] += "O.";
	else
		s[2] += "#.";
	if (k >= 4)
		s[3] += "O.";
	for (int i = 5; i <= k; i++)
	{
		if (i % 3 == 2)
			s[0] += "O.";
		else if (i % 3 == 0)
			s[1] += "O.";
		else
			s[3] += "O.";
	}
	s[2] += "......................";
	for (int i = 0; i < 4; i++)
		if (i != 2)
			while (s[i].size() < 22)
				s[i] += "#.";
	s[0] += "|D|)";
	s[1] += "|.|";
	s[2] += "|";
	s[3] += "|.|)";
	cout<< "+------------------------+" << endl;	
	cout<< s[0] << endl << s[1] << endl << s[2] << endl << s[3] << endl;
	cout<< "+------------------------+" << endl;
}
