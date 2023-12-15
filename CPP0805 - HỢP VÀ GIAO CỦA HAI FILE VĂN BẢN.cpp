#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster();
    ifstream fin1("DATA1.in");
    ifstream fin2("DATA2.in");
    string s;
    set<string> s1, s2, s3, s4;
    while(fin1 >> s)
    {
        for(int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
        s1.insert(s);
        s3.insert(s);
    }
    while(fin2 >> s)
    {
        for(int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
        if(s1.find(s) != s1.end())
            s4.insert(s);
        s3.insert(s);
    }
    for(auto x : s3)
        cout << x << ' ';
    cout << endl;
    for(auto x : s4)
        cout << x << ' ';
    return 0;
}