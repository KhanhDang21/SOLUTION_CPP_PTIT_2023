#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
ll luyThua(ll x, ll y, ll p)
{
    if(y == 0)
        return 1;
    if(y % 2 != 0)
    {
        ll temp = luyThua(x, y - 1, p);
        return (temp * x) % p; 
    }
    else
    {
        ll temp = luyThua(x, y / 2, p);
        return (temp * temp) % p;
    }
}
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        ll x, y, p;
        cin >> x >> y >> p;
        cout << luyThua(x, y, p) << endl;
    }
    return 0;
}