#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mark[10];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(mark, 0, sizeof(mark));
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for(int j = 0; j < s.length(); j++)
                mark[s[j] - '0']++;
        }
        for(int i = 0; i < 10; i++)
        {
            if(mark[i] > 0)
                cout << i << ' ';
        }
        cout << endl;
    }
}