#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster();
    ifstream input("PTIT.in");
    ofstream output("PTIT.out");
    string s;
    while(getline(input, s))
        output << s << endl;
    input.close();
    output.close();
    return 0;
}