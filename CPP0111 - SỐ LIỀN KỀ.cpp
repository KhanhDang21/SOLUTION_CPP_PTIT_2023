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
		cin >> s;
		int len = s.length();
		int cnt = 0;
		for(int i = 0; i < len; i++)
		{
			if(s[i] - s[i + 1] == 1 || s[i + 1] - s[i] == 1)
				cnt++;
		}
		if(cnt == len - 1)
			cout << "YES";
		else	
			cout << "NO";
		cout << endl;
	}
}