#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n, k;
		cin >> n >> k;
		long long res = (double)k * (k - 1) / 2 * (n / k) + ((n % k) * (n % k + 1) / 2);
		cout << res << endl;
	}
}