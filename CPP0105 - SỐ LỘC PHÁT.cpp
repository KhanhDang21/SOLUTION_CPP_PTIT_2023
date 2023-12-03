#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string digit;
		cin >> digit;
		bool red_flag = false;
		for(int i = 0; i < digit.length() - 1; i++)
		{
			if(digit[i] != '0' && digit[i] != '6' && digit[i] != '8')
			{
				red_flag = true;
			}
		}
		if(red_flag == true)	
			cout << "NO";
		else
			cout << "YES";
		cout << endl;
	}
}