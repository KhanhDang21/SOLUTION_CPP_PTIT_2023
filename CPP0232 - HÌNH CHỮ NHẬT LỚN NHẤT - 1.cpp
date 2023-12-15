#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
int a[20][20];
int solve(int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(i && a[i][j])
                a[i][j] = a[i - 1][j] + 1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        vector<int> v;
        for(int j = 0; j < m; j++)
            v.push_back(a[i][j]);
        sort(v.begin(), v.end());
        for(int j = 0; j < v.size(); j++)
            a[i][j] = v[j];
    }
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        int w = 1;
        for(int j = m - 1; j >= 0; j--)
        {
            int cur = a[i][j] * w;
            w++;
            res = max(res, cur);
        }
    }
    return res;
}
int main()
{
    faster();
    int t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        cout << solve(n, m) << endl;
    }
    return 0;
}