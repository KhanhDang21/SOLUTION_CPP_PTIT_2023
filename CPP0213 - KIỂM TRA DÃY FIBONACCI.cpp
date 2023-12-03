#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
ll FIBO[105];
void CreFIBO()
{
    FIBO[1] = 0; FIBO[2] = 1;
    for(int i = 3; i <= 100; i++)
    {
        FIBO[i] = FIBO[i - 2] + FIBO[i - 1];
    }
}
int main()
{
    faster();
    CreFIBO();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j <= 100; j++)
            {
                if(a[i] == FIBO[j])
                {
                    cout << a[i] << ' ';
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}