#include<bits/stdc++.h>
using namespace std;
int solvePrime(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		while(n % i == 0)
			return i;
	}
	return n;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << "1 ";
		for(int i = 2; i <= n; i++)
			cout << solvePrime(i) << ' ';
		cout << endl;
	}
}