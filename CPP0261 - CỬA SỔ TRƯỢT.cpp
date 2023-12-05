#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    faster();
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)  
            cin >> a[i][j];
    }
    int m;
    cin >> m;
    int b[m][m];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
            cin >> b[i][j];
    }
    for(int i = 0; i < n; i += m)
    {
        for(int j = 0; j < n; j += m)
        {
            for(int x = 0; x < m; x++)
            {
                for(int y = 0; y < m; y++)
                    a[x + i][y + j] *= b[x][y];
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}