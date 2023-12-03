#include<bits/stdc++.h>
using namespace std;
long long prime[1000005];
void sieve()
{
	for(long long i = 0; i <= 1000000; i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(long long i = 2; i <= sqrt(1000000); i++)
	{
		if(prime[i])
		{
			for(long long j = i * i; j <= 1000000; j += i)
				prime[j] = 0;
		}
	}
}
int main()
{
	sieve();
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		int cnt = 0;
		for(long long i = 2; i <= sqrt(n); i++)
		{
			if(prime[i])
				cnt++;
		}
		cout << cnt << endl;
	}
}