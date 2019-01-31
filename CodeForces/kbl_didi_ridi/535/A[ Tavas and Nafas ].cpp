#include <iostream>
using namespace std;
void output(int i)
{
	if (i == 0)
		cout << "zero";
	if (i == 1)
		cout << "one";
	if (i == 2)
		cout << "two";
	if (i == 3)
		cout << "three";
	if (i == 4)
		cout << "four";
	if (i == 5)
		cout << "five";
	if (i == 6)
		cout << "six";
	if (i == 7)
		cout << "seven";
	if (i == 8)
		cout << "eight";
	if (i == 9)
		cout << "nine";
	if (i == 10)
		cout << "ten";
	if (i == 11)
		cout << "eleven";
	if (i == 12)
		cout << "twelve";
	if (i == 13)
		cout << "thirteen";
	if (i == 14)
		cout << "fourteen";
	if (i == 15)
		cout << "fifteen";
	if (i == 16)
		cout << "sixteen";
	if (i == 17)
		cout << "seventeen";
	if (i == 18)
		cout << "eighteen";
	if (i == 19)
		cout << "nineteen";
	if (i > 19)
	{
		if (i / 10 == 2)
			cout << "twenty";
		if (i / 10 == 3)
			cout << "thirty";
		if (i / 10 == 4)
			cout << "forty";
		if (i / 10 == 5)
			cout << "fifty";
		if (i / 10 == 6)
			cout << "sixty";
		if (i / 10 == 7)
			cout << "seventy";
		if (i / 10 == 8)
			cout << "eighty";
		if (i / 10 == 9)
			cout << "ninety";
		if (i % 10 == 1)
			cout << "-one";
		if (i % 10 == 2)
			cout << "-two";
		if (i % 10 == 3)
			cout << "-three";
		if (i % 10 == 4)
			cout << "-four";
		if (i % 10 == 5)
			cout << "-five";
		if (i % 10 == 6)
			cout << "-six";
		if (i % 10 == 7)
			cout << "-seven";
		if (i % 10 == 8)
			cout << "-eight";
		if (i % 10 == 9)
			cout << "-nine";	
	}
	cout << endl;
}
int main()
{
	int n;
	cin >> n;
	output(n);
}
