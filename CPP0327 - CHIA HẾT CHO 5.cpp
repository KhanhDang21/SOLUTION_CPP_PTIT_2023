#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
bool check(string s) 
{
    int len = s.length();
    int res = 0;
    for(int i = 0; i < len; i++) 
        res = (res * 2 + (s[i] - '0')) % 5;
    return res == 0;
}
int main() 
{
    int t;
    cin >> t;
    while(t--) 
	{
        string s;
        cin >> s;
        if (check(s)) 
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
    return 0;
}