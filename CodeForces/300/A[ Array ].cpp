#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1000;
vector <int> vec1, vec2, vec3;
int arr[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		if (arr[i] < 0)
			vec1.push_back(arr[i]);
		else if (arr[i] > 0)
			vec2.push_back(arr[i]);
		else
			vec3.push_back(arr[i]);
	if ((vec1.size() % 2) == 0)
	{
		vec3.push_back(vec1[vec1.size() - 1]);
		vec1.pop_back();
	}
	if (vec2.size() == 0)
	{
		vec2.push_back(vec1[vec1.size() - 1]);
		vec1.pop_back();
		vec2.push_back(vec1[vec1.size() - 1]);
		vec1.pop_back();	
	}
	cout << vec1.size() << &#39; &#39;;
	for (int i = 0; i < vec1.size(); i++)
		cout << vec1[i] << &#39; &#39;;
	cout << endl;
	cout << vec2.size() << &#39; &#39;;
	for (int i = 0; i < vec2.size(); i++)
		cout << vec2[i] << &#39; &#39;;
	cout << endl;
	cout << vec3.size() << &#39; &#39;;
	for (int i = 0; i < vec3.size(); i++)
		cout << vec3[i] << &#39; &#39;;
	cout << endl;
}
