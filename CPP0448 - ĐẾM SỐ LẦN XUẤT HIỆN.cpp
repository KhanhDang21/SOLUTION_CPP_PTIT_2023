#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int mark[10005];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(mark, 0, sizeof(mark));
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mark[a[i]]++;
        }
        if(mark[x] == 0)
            cout << "-1";
        else
            cout << mark[x];
        cout << endl;
    }
}