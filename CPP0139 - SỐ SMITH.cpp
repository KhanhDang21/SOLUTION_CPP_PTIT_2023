#include<bits/stdc++.h>
using namespace std;
int SUM(int n)
{
	int sum = 0;
	while(n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int SMITH(int n)
{
	int sum1 = SUM(n);
	int sum2 = 0;
	int tmp = n;
	for(int i = 2; i <= sqrt(n); i++)
	{
		while(n % i == 0)
		{
			sum2 += SUM(i);
			n /= i;
		}
	}
	if(tmp == n)
		return 0;
	if(n != 1)
		sum2 += SUM(n);
	if(sum1 == sum2)
		return 1;
	else	
		return 0;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(SMITH(n))
			cout << "YES";
		else	
			cout << "NO";
		cout << endl;
	}
}