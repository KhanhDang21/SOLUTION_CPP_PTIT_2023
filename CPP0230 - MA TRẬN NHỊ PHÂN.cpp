#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int a[n][3];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        int count1 = 0, count0 = 0;
        for(int j = 0; j < 3; j++)
        {
            if(a[i][j] == 1)
                count1++;
            else
                count0++;
        }
        if(count1 > count0)
            cnt++;
    }
    cout << cnt;
}