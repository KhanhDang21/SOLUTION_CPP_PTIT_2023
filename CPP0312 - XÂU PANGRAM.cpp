#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int checkPangram(string s, int k)
{
	vector<int> charCount(26, 0);
	for(char c : s)
		charCount[c - 'a']++;
	int cnt = 0;
	for(int x : charCount)
	{
		if(x == 0)
			cnt++;
	}
	if(k >= cnt)
		return 1;
	else
		return 0;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		int k;
		cin >> s;
		cin >> k;
		if(checkPangram(s, k))
			cout << '1';
		else
			cout << '0';
		cout << endl;
	}
	return 0;
}