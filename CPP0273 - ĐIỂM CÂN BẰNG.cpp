#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
int findX(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    int sumX = 0;
    for(int i = 0; i < n; i++)
    {
        if(sumX == (sum - a[i]) / 2)
            return i + 1;
        sumX += a[i];
    }
    return -1;
}
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        cout << findX(a, n) << endl;
    }
    return 0;
}