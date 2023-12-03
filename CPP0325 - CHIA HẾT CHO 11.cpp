#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int sumLe = 0, sumChan = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if(i % 2 == 0)
				sumLe += s[i] - '0';
			else
				sumChan += s[i] - '0';
		}
		if(abs(sumLe - sumChan) % 11 == 0)
			cout << '1';
		else
			cout << '0';
		cout << endl;
	}
}