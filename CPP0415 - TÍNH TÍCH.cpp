#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
        int n, m;
        cin >> n >> m;
        long long a[n], b[m];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < m; i++)
            cin >> b[i];
        long long min = b[0], max = a[0];
        for(int i = 0; i < n; i++)
        {
            if(a[i] >= max)
                max = a[i];
        }
        for(int i = 0; i < m; i++)
        {
            if(b[i] <= min)
                min = b[i];
        }
        cout << max * min << endl;
   }
}