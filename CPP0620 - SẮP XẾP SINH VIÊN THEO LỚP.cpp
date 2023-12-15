#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'
struct SinhVien
{
    string msv, name, classs, email;
};
bool cmp(SinhVien &a, SinhVien &b)
{
    if(a.classs > b.classs) return 0;
    if(a.classs < b.classs) return 1;
    if(a.classs == b.classs)
    {
        if(a.msv > b.msv) return 0;
    }   
    return 1;
}
int main()
{
    int n;
    cin >> n;
    SinhVien ds[n];
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        getline(cin, ds[i].msv);
        getline(cin, ds[i].name);
        getline(cin, ds[i].classs);
        getline(cin, ds[i].email);
    }
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i++)
    {
        cout << ds[i].msv << ' ' << ds[i].name << ' ' << ds[i].classs << ' ' << ds[i].email << endl;
    }
    return 0;
}