#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		ll a[n];
		vector<ll> trai;
		vector<ll> phai;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] == 0)
				phai.push_back(a[i]);
			else
				trai.push_back(a[i]);
		}
		for(int i = 0; i < trai.size(); i++)
			cout << trai[i] << ' ';
		for(int i = 0; i < phai.size(); i++)
			cout << phai[i] << ' ';
		cout << endl;
	}
	return 0;
}