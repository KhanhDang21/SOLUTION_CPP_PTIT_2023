#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int findFirst(int a[], int n) 
{
    unordered_set<int> seen;
    for(int i = 0; i < n; i++) 
    {
        if (seen.count(a[i])) 
            return a[i]; 
        else 
            seen.insert(a[i]);
    }
    return -1;
}
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        int result = findFirst(a, n);
        cout << result << endl;
    }
    return 0;
}