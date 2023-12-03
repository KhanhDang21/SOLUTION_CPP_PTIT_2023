#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long UCLN(long long a, long long b)
{
    while(b != 0)
    {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
class PhanSo
{
    private:
        long long tuSo, mauSo;
    public:
        PhanSo(long long tuSo, long long mauSo) : tuSo(tuSo), mauSo(mauSo) {}
        void rutgon()
        {
            long long ucln = UCLN(tuSo, mauSo);
            tuSo = tuSo / ucln;
            mauSo = mauSo / ucln;
        }
        friend istream &operator >> (istream &is, PhanSo &a)
        {
            is >> a.tuSo >> a.mauSo;
            return is;
        }
        friend ostream &operator << (ostream &os, PhanSo &a)
        {
            os << a.tuSo << '/' << a.mauSo;
            return os;
        }
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}