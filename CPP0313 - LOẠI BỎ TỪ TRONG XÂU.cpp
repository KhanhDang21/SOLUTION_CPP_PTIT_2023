#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s1, s2, meomeo;
    getline(cin, s1);
    cin >> s2;
    stringstream bru(s1);
    while(bru >> meomeo)
    {
        if(meomeo != s2)
            cout << meomeo << ' ';  
    }
}