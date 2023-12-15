#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster();
    ifstream fin("VANBAN.in");
    map<string, int> mp;
    string s;
    while(fin >> s)
    {
        for(int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
        mp[s]++;
    }
    for(auto x : mp)
    {
        if(x.second > 0)
            cout << x.first << endl;
    }
    return 0;
}