#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int mark[10000005];
int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		memset(mark, 0, sizeof(mark));
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n - 1; i++)
		{
			cin >> a[i];
			mark[a[i]]++;
		}			
		for(int i = 1; i <= n; i++)
		{
			if(mark[i] == 0)
			{
				cout << i;
				break;
			}
		}
		cout << endl;	
	}
	return 0;
}