#include<bits/stdc++.h>
using namespace std;
int prime[1000005];
void sieve()
{
	for(int i = 0; i <= 1000000; i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(1000000); i++)
	{
		if(prime[i])
		{
			for(int j = i * i; j <= 1000000; j += i)
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
		long long l, r;
		cin >> l >> r;
		int cnt = 0;
		for(long long i = l; i <= sqrt(r); i++)
		{
			if(prime[i])
				cnt++;
		}
		cout << cnt << endl;
	}
}