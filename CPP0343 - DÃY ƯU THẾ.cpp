#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster();
    int t;
    cin >> t; 
    string s, token;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);
        int chan = 0, le = 0, len = 0;
        stringstream ss(s);
        while(ss >> token)
        {
            if((token[token.length() - 1] - '0') % 2 == 0)
                chan++;
            else
                le++;
            len++;
        }
        if((len % 2 == 0 && chan > le) || (len % 2 != 0 && le > chan))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}