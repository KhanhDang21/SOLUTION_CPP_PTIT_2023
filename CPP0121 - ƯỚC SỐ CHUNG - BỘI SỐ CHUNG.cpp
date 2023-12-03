#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b)
{
	if(b == 0)
		return a;
	return GCD(b, a % b);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a, b;
		cin >> a >> b;
		cout << (a * b) / GCD(a, b) << ' ' << GCD(a, b);
		cout << endl;
	}
}