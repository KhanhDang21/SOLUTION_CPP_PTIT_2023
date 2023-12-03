#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int mark[100005];
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(mark, 0, sizeof(mark));
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			mark[a[i]]++;
		}	
		sort(a, a + n, greater<int>());
		int cnt = 0;
		for(int i = a[0]; i >= a[n - 1]; i--)
		{
			if(mark[i] == 0)
				cnt++;
		}
		cout << cnt << endl;
	}
}