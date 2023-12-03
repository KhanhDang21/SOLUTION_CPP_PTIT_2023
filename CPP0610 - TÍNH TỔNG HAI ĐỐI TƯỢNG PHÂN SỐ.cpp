#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
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
class PhanSo
{
    private:
        ll tuSo, mauSo;
    public:
        PhanSo(ll tu = 0, ll mau = 1) : tuSo(tu), mauSo(mau) {}
        PhanSo operator + (PhanSo &a)
        {
            PhanSo Tong;
            Tong.tuSo = tuSo * a.mauSo + a.tuSo * mauSo;
            Tong.mauSo =  mauSo * a.mauSo;
            ll ucln = UCLN(Tong.tuSo, Tong.mauSo);
            Tong.tuSo /= ucln;
            Tong.mauSo /= ucln;
            return Tong;
        }
        friend istream &operator >> (istream &is, PhanSo &a)
        {
            is >> a.tuSo >> a.mauSo;
            return is;
        }
        friend ostream &operator << (ostream &os, PhanSo a)
        {
            os << a.tuSo << '/' << a.mauSo;
            return os;
        }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}