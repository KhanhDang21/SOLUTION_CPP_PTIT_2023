#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int checkTang(int n)
{
	int check = 0;
	while(n > 9)
	{
		if(((n/10) % 10) >= (n % 10))
			return 0;
		n /= 10;
	}
	return 1;
}
int checkGiam(int n)
{
	int check = 0;
	while(n > 9)
	{
		if(((n/10) % 10) <= (n % 10))
			return 0;
		n /= 10;
	}
	return 1;
}
int checkNT(int n)
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
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int cnt = 0;
		int lim = pow(10, n) - 1;
		for(int i = pow(10, n - 1); i <= lim; i++)
		{	
			if((checkGiam(i) || checkTang(i)) && checkNT(i))
			{
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}