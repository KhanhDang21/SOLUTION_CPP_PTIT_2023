#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		char s;
		cin >> s;
		if(s != tolower(s))
			cout << char(tolower(s));
		if(s != toupper(s))
			cout << char(toupper(s));
		cout << endl;
	}
}