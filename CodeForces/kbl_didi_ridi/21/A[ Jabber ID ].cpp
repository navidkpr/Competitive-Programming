#include <bits/stdc++.h>

using namespace std;

bool isGood(char c){
	if (c>=&#39;A&#39; && c<=&#39;Z&#39;)
		return true;
	if (c>=&#39;a&#39; && c<=&#39;z&#39;)
		return true;
	if (c>=&#39;0&#39; && c<=&#39;9&#39;)
		return true;
	if (c==&#39;_&#39;)
		return true;
	return false;
}

bool isUser(string s){
	if (s.size()<1 || s.size()>16)
		return false;
	for (int i=0;i<s.size();++i)
		if (isGood(s[i])==false)
			return false;
	return true;
}

bool isHost(string s){
	int last=-1;
	if (s.size()<1 || s.size()>32)
		return false;
	s+=&#39;.&#39;;
	for (int i=0;i<=s.size();++i)
		if (s[i]==&#39;.&#39;){
			string x=s.substr(last+1,i-last-1);
			if (isUser(x)==false)
				return false;
			last=i;
		}
	return true;
}

bool check(string s){
	int x=-1;
	for (int i=0;i<s.size();++i)
		if (s[i]==&#39;/&#39;){
			x=i;
			break;
		}
	if (x==-1)
		return isHost(s);
	string host=s.substr(0,x);
	string rsc=s.substr(x+1,s.size()-1-x);
	return isHost(host) && isUser(rsc);
}

int main(){
	string s;
	cin >> s;
	int atsign=-1;
	for (int i=0;i<s.size();++i)
		if (s[i]==&#39;@&#39;){
			atsign=i;
			break;
		}
	if (atsign==-1){
		cout << "NO";
		return 0;
	}
	string user=s.substr(0,atsign);
	string host=s.substr(atsign+1,s.size()-atsign-1);
	if (isUser(user) && check(host))
		cout << "YES";
	else
		cout << "NO";
}
