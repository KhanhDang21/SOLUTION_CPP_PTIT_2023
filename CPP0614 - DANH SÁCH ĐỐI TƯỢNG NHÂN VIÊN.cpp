#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int cnt = 0;
class NhanVien
{
    private:
        string maNhanVien, hoTen, gioiTinh, ngaySinh, diaChi, soThue, ngayKi;
    public:
        NhanVien()
        {
            this -> maNhanVien = "000";
            this -> hoTen = "";
            this -> gioiTinh = "";
            this -> ngaySinh = "";
            this -> diaChi = "";
            this -> soThue = "";
            this -> ngayKi = "";
        }
        friend istream &operator >> (istream &is, NhanVien &a)
        {
            cnt++;
            scanf("\n");
            if(cnt < 10)
                a.maNhanVien += "0" + to_string(cnt);
            else
                a.maNhanVien += to_string(cnt);
            getline(is, a.hoTen);
            getline(is, a.gioiTinh);
            getline(is, a.ngaySinh);
            getline(is, a.diaChi);
            getline(is, a.soThue);
            getline(is, a.ngayKi);
            return is;
        }
        friend ostream &operator << (ostream &os, NhanVien &a)
        {
            os << a.maNhanVien << ' ' << a.hoTen << ' ' << a.gioiTinh << ' '
            << a.ngaySinh << ' ' << a.diaChi << ' ' << a.soThue << ' ' << a.ngayKi << endl;
            return os;
        }
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}