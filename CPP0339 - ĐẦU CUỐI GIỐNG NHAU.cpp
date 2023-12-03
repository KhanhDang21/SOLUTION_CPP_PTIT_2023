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
        int cnt = 0;
        for(int i = 0; i < s.length(); i++)
        {
            for(int j = i + 1; j < s.length(); j++)
            {
                if(s[i] == s[j])
                    cnt++;
            }
        }
        cout << cnt + s.size() << endl;
    }
}