#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
int n, a[100];
void in()
{
    for(int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}
void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n)
            in();
        else
            Try(i + 1);
    }
}
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}