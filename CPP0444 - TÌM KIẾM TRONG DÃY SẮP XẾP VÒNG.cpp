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
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		int l = 0, r = n - 1;
		int result;
		while(l <= r)
		{
			if(a[l] == x)
			{
				result = l + 1;
				break;
			}
			if(a[r] == x)
			{
				result = r + 1;
				break;
			}
			l++;
			r--;
		}
		cout << result << endl;
	}
	return 0;
}