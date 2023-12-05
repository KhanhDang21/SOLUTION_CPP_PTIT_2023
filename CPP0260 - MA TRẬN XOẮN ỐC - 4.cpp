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
    int a[n][n], b[n * n];
    int k;
    k = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <n; j++)
        {
            cin >> a[i][j];
            b[k++] = a[i][j];
        }
    }
    sort(b, b + k);
    k = 0;
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    while(h1 <= h2 && c1 <= c2)
    {
        for(int i = c1; i <= c2; i++)
            a[h1][i] = b[k++];
        h1++;
        for(int i = h1; i <= h2; i++)
            a[i][c2] = b[k++];
        c2--;
        if(h1 <= h2)
        {
            for(int i = c2; i >= c1; i--)
                a[h2][i] = b[k++];
            h2--;
        }
        if(c1 <= c2)
        {
            for(int i = h2; i >= h1; i--)
                a[i][c1] = b[k++];
            c1++;
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