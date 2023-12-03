#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void fibo(int n)
{
	long long FIBO[n];
	FIBO[1] = 1;
	FIBO[2] = 1;
	for(int i = 3; i <= n; i++)
		FIBO[i] = FIBO[i - 1] + FIBO[i - 2];
	cout << FIBO[n] << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		fibo(n);
	}
}