#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long;
using namespace std;
int checkPrime(long long n)
{
	if(n < 2)
		return 0;
	for(long long i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		vector<long long> v;
		if(checkPrime(n))
			cout << n;
		else
		{
			for(long long i = 2; i <= sqrt(n); i++)
			{
				while(n % i == 0)
				{
					v.push_back(i);
					n /= i;
				}
			}
			if(n > 1)
				v.push_back(n);
			cout << v[v.size() - 1];
		}
		cout << endl;
	}
}