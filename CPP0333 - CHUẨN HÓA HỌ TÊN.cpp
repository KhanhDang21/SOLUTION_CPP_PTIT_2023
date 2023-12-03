#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    stringstream ss(s);
    vector<string> res;
    string meomeo;
    while(ss >> meomeo)
    {
        meomeo[0] = toupper(meomeo[0]);
        res.push_back(meomeo);
    }    
    for(int i = 0; i < res.size(); i++)
    {
        if(i = res.size() - 1)
        {
            for(int j = 0; j < res[i].size(); j++)
                res[i][j] = toupper(res[i][j]);
        }
    }
    for(int i = 0; i < res.size(); i++)
    {
        if(i == res.size() - 2)
            cout << res[i] << ", ";
        else
            cout << res[i] << ' ';
    }
}