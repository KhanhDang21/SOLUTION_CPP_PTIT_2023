#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
struct PhanSo
{
    ll tuSo, mauSo;
};
ll UCLN(ll a, ll b)
{
    while(b != 0)
    {
        ll temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
void nhap(PhanSo &a)
{
    cin >> a.tuSo >> a.mauSo;
}
void in(PhanSo a)
{
    cout << a.tuSo << '/' << a.mauSo;
}
PhanSo tong (PhanSo &a, PhanSo &b)
{
    PhanSo t;
    t.tuSo = a.tuSo * b.mauSo + b.tuSo * a.mauSo;
    t.mauSo = a.mauSo * b.mauSo;
    ll ucln = UCLN(t.tuSo, t.mauSo);
    t.tuSo /= ucln;
    t.mauSo /= ucln;
    return t;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}