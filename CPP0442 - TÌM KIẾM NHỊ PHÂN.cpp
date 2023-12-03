#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int l = 0, r = n - 1, check = 0;
        while(l <= r)
        {
            if(a[l] == x)
                check = 1;
            if(a[r] == x)
                check = 1;
            l++;
            r--;
        }
        if(check == 0)
            cout << "-1";
        else    
            cout << '1';
        cout << endl;
    }
}