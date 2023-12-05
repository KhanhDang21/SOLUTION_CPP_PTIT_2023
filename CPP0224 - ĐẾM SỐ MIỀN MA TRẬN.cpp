#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
void Try(int i, int j, vector<vector<int>> &res)
{
    if(i < 0 || j < 0 || j >= res[0].size() || i >= res[0].size() || res[i][j] == 0)
        return;
    res[i][j] = 0;
    Try(i + 1, j, res);
    Try(i - 1, j, res);
    Try(i, j - 1, res);
    Try(i, j + 1, res);
    Try(i + 1, j + 1, res);
    Try(i-1, j - 1, res);
    Try(i + 1, j - 1, res);
    Try(i - 1, j + 1, res);
}
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        vector<int> v;
        vector<vector<int>> res;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                v.push_back(a[i][j]);
            }    
            res.push_back(v);
            v.clear();
        }
        int cnt = 0;
        for(int i = 0; i < res.size(); i++)
        {
            for(int j = 0; j < res[0].size(); j++)
            {
                if(res[i][j] == 1)
                {
                    cnt++;
                    Try(i, j, res);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}