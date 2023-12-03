#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int mark[1000005];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        memset(mark, 0, sizeof(mark));
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mark[a[i]]++;
        }
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {   
            if(mark[a[i]] >= 2)
                cnt++;
        }
        cout << cnt << endl;
    }
}