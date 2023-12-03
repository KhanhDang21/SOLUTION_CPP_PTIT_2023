#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
void out(int a[], int n)
{
    for(int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    cout << ' ';
}
void phiaTruoc(int a[], int n)
{
    int i = n - 1;
    while(a[i] < a[i + 1] && i >= 1)
        i--;
    int j = n;
    while(a[i] < a[j])
        j--;
    swap(a[i], a[j]);
    int l = i + 1, r = n;
    while(l <= r)
    {
        swap(a[l], a[r]);
        l++, r--;
    }
}
int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        phiaTruoc(a, n);
        out(a, n);
        cout << endl;
    }
    return 0;
}