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
		int min1 = a[0], min2;
		bool check = false;
		for(int i = 1; i < n; i++)
		{
			if(a[i] > min1)
			{
				check = true;
				min2 = a[i];
				break;
			}
		}
		if(check == false)
			cout << "-1";
		else
		{
			cout << min1 << ' ' << min2;
		}
		cout << endl;
	}
	return 0;
}