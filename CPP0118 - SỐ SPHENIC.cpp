#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int cnt = 0, cntNum = 0;
		int check = -1;
		for(int i = 2; i <= sqrt(n); i++)
		{
			while(n % i == 0)
			{
				cntNum++;
				if(n % i == 0 && i != check)
				{
					cnt++;
					check = i;
				}	
				n /= i;	
			}
		}
		if(n > 1)
		{
			cntNum++;
			if(check != n)
				cnt++;
		}	
		if(cnt == 3 && cntNum == 3)
			cout << '1';
		else
			cout << '0';
		cout << endl;
	}
}