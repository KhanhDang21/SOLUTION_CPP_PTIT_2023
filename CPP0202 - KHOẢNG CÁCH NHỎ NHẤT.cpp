#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
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
		int minDis = 1e9;
		for(int i = 0; i < n; i++)
		{
			if(abs(a[i] - a[i + 1]) < minDis)
				minDis = abs(a[i] - a[i + 1]);
		}
		cout << minDis << endl;
	}
}