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
        set<string> v1;
        string s1;
        getline(cin, s1);
        stringstream ss1(s1);
        while(ss1 >> s1)
        {
            v1.insert(s1);
        }
        vector<string> v2;
        string s2;
        getline(cin, s2);
        stringstream ss2(s2);
        while(ss2 >> s2)
        {
            v2.push_back(s2);
        }
        for(auto x : v1)
        {
            int check = 1;
            for(int j = 0; j < v2.size(); j++)
            {
                if(x == v2[j])
                    check = 0;
            }
            if(check)
            {
                cout << x << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}