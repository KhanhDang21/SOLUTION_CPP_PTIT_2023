#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i]-'0' == 0 && s[i+1]-'0' == 8 && s[i+2]-'0' == 4)
			{
				i += 2;
				continue;
			}	
			cout << s[i];
		}
		cout << endl;
	}
}