#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int cnt = 0;
class NhanVien
{
    public:
        string maNhanVien, hoTen, gioiTinh, ngaySinh, diaChi, soThue, ngayKi;
        string d, m, y;
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
            stringstream ss(a.ngaySinh);
            getline(ss, a.m, '/');
            getline(ss, a.d, '/');
            getline(ss, a.y, '/');
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
bool cmp(NhanVien &a, NhanVien &b)
{
    if(a.y < b.y) return 1;
    if(a.y > b.y) return 0;
    if(a.m < b.m) return 1;
    if(a.m > b.m) return 0;
    if(a.d < b.d) return 1;
    return 0;
}
void sapxep(NhanVien a[], int n)
{
    sort(a, a + n, cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}