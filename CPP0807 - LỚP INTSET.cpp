#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster();
    ifstream fin("DATA.in");
    int n, m , i;
    fin >> n >> m;
    set<int> s1, s2;
    while(n--)
    {
        fin >> i;
        s1.insert(i);
    }
    while(m--)
    {
        fin >> i;
        if(s1.find(i) != s1.end())
            s2.insert(i);
    }
    for(auto x : s2)
        cout << x << ' ';
    return 0;   
}