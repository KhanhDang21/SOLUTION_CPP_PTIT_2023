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
    int a[n];
    set<int> se;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    for(auto x : se)
    {
        cout << x << ' ';
    }
    return 0;
}