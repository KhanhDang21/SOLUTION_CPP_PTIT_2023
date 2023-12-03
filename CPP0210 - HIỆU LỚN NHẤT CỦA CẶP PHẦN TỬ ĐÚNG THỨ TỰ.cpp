#include<bits/stdc++.h>
#define ll long long 
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
        int max = -1;
        bool check = false;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {   
                if(a[j] - a[i] > max)
                {
                    max = a[j] - a[i];
                    check = true;
                }   
            }
        }
        if(check)
            cout << max << endl;
        else
            cout << "-1" << endl;
    }
}