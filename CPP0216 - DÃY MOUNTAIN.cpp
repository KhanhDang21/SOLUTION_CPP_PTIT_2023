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
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int l, r;
        cin >> l >> r;
        bool check = true;
        for(int i = l; i < r; i++)
        {
            if(a[i] > a[i + 1])
            {
                for(int j = i; j < r; j++)
                {
                    if(a[j] <= a[j + 1])
                        check = false;
                }
            }
        }
        if(check)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}