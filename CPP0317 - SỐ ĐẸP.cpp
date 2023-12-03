#include<bits/stdc++.h>
#define long long ll
using namespace std;
bool checkBeaty(string s)
{
	int len = s.length();
	int l = 0, r = len - 1;
	while(l <= r)
	{
		if(s[l] != s[r] || s[l] % 2 != 0 || s[r] % 2 != 0)
			return false;
		else
		{
			l++;
			r--;
		}
	}
	return true;
}
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		if(checkBeaty(s))
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
}