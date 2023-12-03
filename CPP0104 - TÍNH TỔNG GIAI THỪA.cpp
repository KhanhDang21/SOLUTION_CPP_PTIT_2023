#include<bits/stdc++.h>
using namespace std;
long long factorial(int n)
{
	if(n < 2)
		return 1;
	return factorial(n - 1) * n;
}
int main()
{
	int n;
	cin >> n;
	long long sum = 0;
	for(int i=1; i<=n; i++)
		sum += factorial(i);
	cout << sum;
}