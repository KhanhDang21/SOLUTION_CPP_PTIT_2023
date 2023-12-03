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
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < n / 2; i++)
		{
			cout << a[n - 1 - i] << ' ' << a[i] << ' ';
		}
		if(n % 2 != 0)
			cout << a[n / 2];
		cout << endl;
	}
	return 0;
}