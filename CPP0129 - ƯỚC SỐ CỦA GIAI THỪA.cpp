#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, p;
		cin >> n >> p;
		if(n < p)
			cout << '0';
		else
		{
			int cnt = 0;
			for(int i = 1; i <= n; i++)
			{
				int tmp = i;
				while(tmp % p == 0)
				{
					cnt++;
					tmp /= p;
				}
			}
			cout << cnt;
		}
		cout << endl;
	}
}