#include<bits/stdc++.h>
using namespace std;
int main()
{
	char A1[] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'}; 
	char A2[] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
	int t;
	cin >> t;
	while(t--)
	{
		int k;
		cin >> k;
		char ans[15];
		for(int i = 0; i < 15; i++)
			cin >> ans[i];
		int sum = 0;
		if(k == 101)
		{
			for(int i = 0; i < 15; i++)
			{
				if(A1[i] == ans[i])
					sum++;
			}
		}
		else if(k == 102)
		{
			for(int i = 0; i < 15; i++)
			{
				if(A2[i] == ans[i])
					sum++;
			}
		}
		cout << fixed << setprecision(2) << (float)sum * 10 / 15 << endl;
	}
}