#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		bool check = false;
		int res;
		for(int i = 0; i < n; i++)
		{
			if(a[i] == k)
			{
				res = i + 1;
				check = true;
				break;
			}
		}
		if(check)
			cout << res;
		else
			cout << "-1";
		cout << endl;
	}
	return 0;
}