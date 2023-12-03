#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[k][n];
		vector<int> v;
		for(int i = 0; i < k; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >> a[i][j];
				v.push_back(a[i][j]);
			}
		}
		sort(v.begin(), v.end());
		for(int x : v)
			cout << x << ' ';
		cout << endl;
	}
	return 0;
}