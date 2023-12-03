#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long;
using namespace std;
int find(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return i;
	}
	return n;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << "1 ";
		for(int i = 2; i <= n; i++)
		{
			cout << find(i) << ' ';
		}
		cout << endl;
	}
}