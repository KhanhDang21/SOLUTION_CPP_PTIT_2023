#include<bits/stdc++.h>
using namespace std;
int checkPrime(int n)
{
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}
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
		int x;
		cin >> x;
		int cnt = 0;
		for(int i = 1; i <= x; i++)
		{
			if(GCD(i, x) ==  1)
				cnt++;
		}
		if(checkPrime(cnt))
			cout << '1';
		else	
			cout << '0';
		cout << endl;
	}
}