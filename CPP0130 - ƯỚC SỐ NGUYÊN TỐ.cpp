#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long;
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		for(long long i = 2; i <= sqrt(n); i++)
		{
			while(n % i == 0)
			{
				cout << i << ' ';
				n /= i;
			}	
		}
		if(n != 1)
			cout << n;
		cout << endl;
	}
}