#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for(int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        for(int i = 0; i < s.length(); i++)
        {
            if(mp[s[i]] > 0)
            {
                cout << s[i] << mp[s[i]];
                mp[s[i]] = 0;
            }
        }
        cout << endl;
    }
}