#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
void max(int m, int s) 
{ 
    vector<int> v; 
    while(m--) 
    { 
        if(s>9) 
        { 
            v.push_back(9); 
            s -= 9; 
        } 
        else 
        { 
            v.push_back(s); 
            s = 0; 
        } 
    } 
    for(int i = 0; i < v.size(); i++) 
    { 
        cout << v[i]; 
    } 
} 
void min(int m, int s) 
{ 
    vector<int> b; 
    while(m--) 
    { 
        if(s>9) 
        { 
            b.push_back(9); 
            s-=9; 
        } 
        else if(m>0&&s!=1) 
        { 
            b.push_back(s-1); 
            s = 1; 
        } 
        else if(s==1&&m>0) 
        { 
            b.push_back(0); 
        } 
        else 
        { 
            b.push_back(s); 
        } 
    } 
    for(int i = b.size()-1; i >= 0;i--) 
    { 
        cout << b[i]; 
    } 
} 
main() 
{ 
    int m,s; 
    cin >> m >> s; 
    if(s>9*m||s<1) 
    { 
        cout << "-1 -1";
    } 
    else 
    { 
        min(m,s); 
        cout << " "; 
        max(m,s); 
    } 
}