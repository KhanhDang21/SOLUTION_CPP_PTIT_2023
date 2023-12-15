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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        int r = 0, c = 0;
        int n1 = n, m1 = m;
        int bef, cur;
        while(r < n && c < m)
        {
            if(r + 1 == n || c + 1 == m)
                break;
            bef = a[r + 1][c];
            for(int i = c; i < m; i++)
            {
                cur = a[r][i];
                a[r][i] = bef;
                bef = cur;
            }
            r++;
            for(int i = r; i < n; i++)
            {
                cur = a[i][m - 1];
                a[i][m - 1] = bef;
                bef = cur;
            }
            m--;
            if(r < n)
            {
                for(int i = m - 1; i >= c; i--)
                {
                    cur = a[n - 1][i];
                    a[n - 1][i] = bef;
                    bef = cur;
                }
            }
            n--;
            if(c < m)
            {
                for(int i = n - 1; i >= r; i--)
                {
                    cur = a[i][c];
                    a[i][c] = bef;
                    bef = cur;
                }
            }
            c++;
        }
        n = n1;
        m = m1;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}