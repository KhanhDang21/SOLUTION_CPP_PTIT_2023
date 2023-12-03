#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        int cnt = 0;
        stringstream bru(s);
        string word;
        while(bru >> word)
            cnt++;
        cout << cnt << endl;
    }
}