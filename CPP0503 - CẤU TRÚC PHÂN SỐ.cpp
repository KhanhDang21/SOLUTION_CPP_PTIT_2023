#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
ll GCD(ll a, ll b)
{
    while(b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
struct PhanSo
{
    ll tuSo, mauSo;
};
void nhap(PhanSo &x)
{
    cin >> x.tuSo >> x.mauSo;
}
void rutgon(PhanSo &x)
{
    ll ucln = GCD(x.mauSo, x.tuSo);
    x.tuSo = x.tuSo / ucln;
    x.mauSo = x.mauSo / ucln;
}
void in(PhanSo x)
{
    cout << x.tuSo << '/' << x.mauSo;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}