#include<bits/stdc++.h>
#define ll long long 
using namespace std;
long long fibo[100];
void creative()
{
	fibo[0] = 0, fibo[1] = 1;
	for(int i = 2; i <= 92; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
}
int checkFibo(long long n)
{
	creative();
	for(int i = 0; i <= 92; i++)
	{
		if(n == fibo[i])
			return 1;
	}
	return 0;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		if(checkFibo(n))
			cout << "YES";
		else	
			cout << "NO";
		cout << endl;
	}
}