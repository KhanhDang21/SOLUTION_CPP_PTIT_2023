#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string token;
        stack<string> st;
        while(ss >> token)
        {
            st.push(token);
        }
        while(st.empty() == 0)
        {
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
    return 0;
}