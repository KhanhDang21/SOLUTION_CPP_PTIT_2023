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
    string msv, name, lop, email;
};
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[n];
    for(int i = 0; i < n; i++)
    {
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
    }
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ':' << endl;
        for(int i = 0; i < n; i++)
        {
            if(a[i].lop == s)
                cout << a[i].msv << ' ' << a[i].name << ' ' << a[i].lop << ' ' << a[i].email << endl;
        }
    }
    return 0;
}