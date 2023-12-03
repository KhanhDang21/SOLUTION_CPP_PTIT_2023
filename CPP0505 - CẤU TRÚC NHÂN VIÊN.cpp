#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
struct NhanVien
{
    string hoTen, gioiTinh, ngaySinh, diaChi, maSo, ngayKi;
};
void nhap(NhanVien &a)
{
    getline(cin, a.hoTen);
    cin >> a.gioiTinh >> a.ngaySinh;
    cin.ignore();
    getline(cin, a.diaChi);
    cin >> a.maSo >> a.ngayKi;
}
void in(NhanVien &a)
{
    cout << "00001 ";
    cout << a.hoTen << ' ' << a.gioiTinh << ' ' << a.ngaySinh << ' ' << a.diaChi << ' ' << a.maSo << ' ' << a.ngayKi; 
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}