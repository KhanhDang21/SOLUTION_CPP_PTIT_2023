#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    faster();
    ifstream in("DATA.in");
    map<int, int> mp;
    int n;
    while(in >> n)
    {
        mp[n]++;
    }
    for(auto x : mp)
    {
        cout << x.first << ' ' << x.second << endl;
    }
    return 0;
}