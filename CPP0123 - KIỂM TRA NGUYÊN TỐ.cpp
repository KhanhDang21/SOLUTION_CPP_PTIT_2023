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
	int n;
	cin >> n;
	if(checkNT(n) == 1)
		cout << "YES";
	else
		cout << "NO";
}