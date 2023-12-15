#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, st;
        cin >> n >> st;
        int a[n];
        ll ans = 0;
        for(int i = n - 1; i >= 0; i--)
            cin >> a[i];
        ll x = 1;
        for(int i = 0; i < n; i++)
        {
            ans += a[i] * x;
            ans %= MOD;
            x *= st;
            x %= MOD;
        }
        cout << ans << endl;
    }
    return 0;
}