#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
class NhanVien
{
    private:
        string hoTen, gioiTinh, ngaySinh, diaChi, maSo, ngayKi;
    public:
        friend istream &operator >> (istream &is, NhanVien &a)
        {
            getline(is, a.hoTen);
            is >> a.gioiTinh >> a.ngaySinh;
            cin.ignore();
            getline(is, a.diaChi);
            is >> a.maSo >> a.ngayKi;
            return is;
        }
        friend ostream &operator >> (ostream &os, NhanVien &a)
        {
            os << "00001 ";
            os << a.hoTen << ' ' << a.gioiTinh << ' ' << a.ngaySinh << ' ' << a.diaChi << ' ' << a.maSo << ' ' << a.ngayKi;
            return os;
        }
};
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}