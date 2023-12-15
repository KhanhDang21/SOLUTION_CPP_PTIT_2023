#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int n, k, i;
int a[25];
void ThKe(int a[], int n, int k)
{
    for(int i = 1; i <= k; i++)
        a[i] = i;
    while(1)
    {
        for(int i = 1; i <= k; i++)
            cout << a[i];
        cout << ' ';
        i = k;
        while(i > 0 && a[i] >= n - k + i)
            i--;
        if(i == 0)
            return;
        a[i] = a[i] + 1;
        int p = a[i];
        while(i <= k)
            a[i++] = p++;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        ThKe(a, n, k);
        cout << endl;   
    }
    return 0;
}