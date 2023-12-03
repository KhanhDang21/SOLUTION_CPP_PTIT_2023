#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double result = 0;
	for(int i = 1; i <= n; i++)
	{
		result += (1 / (i * 1.0));
	}
	cout << setprecision(4) << fixed << result;
}