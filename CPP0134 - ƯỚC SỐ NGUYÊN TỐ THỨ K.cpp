#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> result;
		for(int i = 2; i <= sqrt(n); i++)
		{
			while(n % i == 0)
			{
				result.push_back(i);
				n /= i;
			}
		} 
		if(n > 1)
				result.push_back(n);
		if(k > result.size())
			cout << "-1";
		else
			cout << result[k - 1];
		cout << endl;
	}
}