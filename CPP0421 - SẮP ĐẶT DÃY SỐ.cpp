#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster();
    int t;
    cin >> t; 
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> mark(10000007, 0); 
        for(int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if(x >= 0 && x < 10000001)
                mark[x] = 1;
        }
        for(int i = 0; i < n; i++)
        {
            if(mark[i] == 1)
                cout << i << ' ';
            else
                cout << "-1 ";
        }
        cout << endl;
    }
    return 0;
}