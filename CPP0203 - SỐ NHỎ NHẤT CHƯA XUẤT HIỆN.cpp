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
        map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x] = 1; 
        }
        for(int i = 1; i < 1000005; i++)
        {
            if(m[i] == 0)
            {
                cout << i;
                break;
            }
        }
        cout << endl;
    }
}