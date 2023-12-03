#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		double x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << fixed << setprecision(4) << sqrt(pow((y2 - y1), 2) + pow((x2 - x1), 2));
		cout << endl;
	}
}