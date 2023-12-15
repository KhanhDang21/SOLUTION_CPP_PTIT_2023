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
    return a.msv < b.msv;
}
SinhVien ds[1005];
int main()
{
    int cnt = 0;
    while(cin >> ds[cnt].msv)
    {
        cin.ignore();
        getline(cin, ds[cnt].name);
        getline(cin, ds[cnt].classs);
        getline(cin, ds[cnt].email);
        cnt++;
    }
    sort(ds, ds + cnt, cmp);
    for(int i = 0; i < cnt; i++)
    {
        cout << ds[i].msv << ' ' << ds[i].name << ' ' << ds[i].classs << ' ' << ds[i].email << endl;
    }
    return 0;
}