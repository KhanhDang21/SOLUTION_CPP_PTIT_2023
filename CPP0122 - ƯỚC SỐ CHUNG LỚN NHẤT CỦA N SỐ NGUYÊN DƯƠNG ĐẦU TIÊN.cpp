#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b)
{
	if(b == 0)
		return a;
	return GCD(b, a % b);
}
long long LCM(long long a, long long b)
{
	return (a * b) / GCD(a, b);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long result = 1;
		for(long long i = 1; i <= n; i++)
			result = LCM(result, i);
		cout << result << endl;
	}
}