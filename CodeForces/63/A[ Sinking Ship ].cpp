#include <iostream>
#include <vector>

using namespace std;

vector <string> vec1, vec2, vec3;

int main()
{
	int n;
	cin >> n;
	string cpt;
	for (int i = 0; i < n; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		if (s2 == "rat")
			vec1.push_back(s1);
		if (s2 == "woman" || s2 == "child")
			vec2.push_back(s1);
		if (s2 == "man")
			vec3.push_back(s1);
		if (s2 == "captain")
			cpt = s1;
	}
	for (int i = 0; i < vec1.size(); i++)
		cout << vec1[i] << endl;
	for (int i = 0; i < vec2.size(); i++)
		cout << vec2[i] << endl;
	for (int i = 0; i < vec3.size(); i++)
		cout << vec3[i] << endl;
	cout << cpt << endl;
	return 0;
}
