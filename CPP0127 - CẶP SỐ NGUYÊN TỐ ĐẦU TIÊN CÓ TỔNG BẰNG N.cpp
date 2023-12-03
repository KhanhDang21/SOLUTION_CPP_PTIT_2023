#include<bits/stdc++.h>
using namespace std;
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
		for(int i = 2; i <= n / 2; i++)
		{
			if(checkNT(i) && checkNT(n - i))
			{
				cout << i << ' ' << n - i;
				cnt = 1;
				break;
			}
		}
		if(cnt == 0)
			cout << "-1";
		cout << endl;
	}
}