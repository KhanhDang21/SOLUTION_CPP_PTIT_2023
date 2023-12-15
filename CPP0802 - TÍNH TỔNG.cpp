#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int Sum(string &s)
{
    if(s.length() > 9)
        return 0;
    long long n = 0;
    for(char x : s)
    {
        if(!isdigit(x))
            return 0;
        n = n * 10 + x - '0';
    }
    if(n <= 2147483647)
        return int(n);
    return 0;
}
int main()
{
    faster();
    ifstream fin("DATA.in");
    string s;
    long long sum = 0;
    while(fin >> s)
    {
        sum += Sum(s);
    }
    cout << sum;
    return 0;
}