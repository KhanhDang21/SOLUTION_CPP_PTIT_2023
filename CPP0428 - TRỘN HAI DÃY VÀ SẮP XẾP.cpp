#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        vector<int> res;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            res.push_back(a[i]);
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            res.push_back(b[i]);
        }
        sort(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++)
            cout << res[i] << ' ';
        cout << endl;
    }
}