#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int len = s.length();
		if(s[len - 1] == '6' && s[len - 2] == '8')
			cout << '1';
		else
			cout << '0';
		cout << endl;
	}
}