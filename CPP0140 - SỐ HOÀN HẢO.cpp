#include<bits/stdc++.h>
#define ll long long 
using namespace std;
long long checkPrime(long long n)
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
long long check(long long n)
{ 
	long long son = 0; 
	while(n % 2 == 0)
	{ 
		son++; 
		n /= 2; 
	}
	if(n != 1) 
		return 0; 
	else 
	{ 
		if(checkPrime(son)) 
			return 1; 
		else 
			return 0; 
	} 
} 
int main()
{ 
	int t; 
	cin >> t; 
	while(t--)
	{
		long long n; 
		cin >> n; 
		if(n % 2 != 0) 
			cout << "0" << endl; 
		else
		{ 
			long long x = sqrt(n * 2); 
			if(x * (x + 1) != n * 2) 
				cout << "0" << endl; 
			else 
			{ 
				if(checkPrime(x) && check(x+1)) 
					cout << "1" << endl; 
				else 
					cout << "0" << endl;
			} 
		}
	}
}