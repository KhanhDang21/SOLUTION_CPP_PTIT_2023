#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		while(n > 9)
		{
			long long sum = 0;
			while(n != 0)
			{
				sum += n % 10;
				n /= 10;
			}
			n = sum;
		}
		cout << n << endl;
	}
}