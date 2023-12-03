#include<bits/stdc++.h>
using namespace std;
int checkTN(long long n)
{
	long long m = n;
	long long res = 0;
	while(n != 0)
	{
		res = res * 10 + n % 10;
		n /= 10;
	}
	if(res == m)
		return 1;
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
		if(checkTN(n) == 1)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
}