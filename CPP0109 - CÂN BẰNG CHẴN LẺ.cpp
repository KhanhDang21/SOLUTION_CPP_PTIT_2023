#include<bits/stdc++.h>
using namespace std;
int CB(int n)
{
	int chan = 0, le = 0;
	while(n != 0)
	{
		if((n % 10) % 2 == 0)
			chan++;
		else
			le++;
		n /= 10;
	}
	if(chan == le)
		return 1;
	return 0;
}
int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = pow(10, n - 1); i < pow(10, n); i++)
	{
		if(CB(i) == 1)
		{
			cout << i << ' ';
			cnt++;
		}	
		if(cnt == 10)
		{
			cout << endl;
			cnt = 0;
		}
	}
}