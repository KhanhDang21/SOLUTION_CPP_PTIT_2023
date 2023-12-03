#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mark[100005];
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        memset(mark, 0, sizeof(mark));
        string s;
        cin >> s;
        int len = s.length();
        for(int i = 0; i < len; i++)
            mark[s[i]]++;
        for(int i = 0; i < len; i++)
        {
            if(mark[s[i]] <= 1)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}