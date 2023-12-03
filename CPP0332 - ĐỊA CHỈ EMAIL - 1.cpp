#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int len = s.length();
    for(int i = 0; i < len; i++)
        s[i] = tolower(s[i]);
    stringstream ss(s);
    vector<string> result;
    string meomeo;
    while(ss >> meomeo)
        result.push_back(meomeo);
    cout << result[result.size() - 1];
    for(int i = 0; i < result.size() - 1; i++)
        cout << result[i][0];
    cout << "@ptit.edu.vn";
}