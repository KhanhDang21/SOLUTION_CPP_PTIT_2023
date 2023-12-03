#include<bits/stdc++.h>
#define long long ll
using namespace std;
int mark[1005] = {0};
int main()
{
	int n;
	cin >> n;
	cin.ignore();
	set<string> s;
	for(int i = 1; i <= n; i++)
	{
		string s1;
		getline(cin, s1);
		s.insert(s1);
	}
	cout << s.size();
}