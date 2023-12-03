#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
int x = 0;
struct NhanVien 
{
    string hoTen, ngaySinh, gioiTinh, diaChi, maSo, ngayKi, maNV,
    ngay, thang, nam;
};
void nhap(NhanVien &a)
{
    ++x;
    if(x < 10) 
        a.maNV = "0000" + to_string(x);
    else 
        a.maNV = "000" + to_string(x);
    cin.ignore();
    getline(cin, a.hoTen);
    cin >> a.gioiTinh >> a.ngaySinh;
    stringstream ss(a.ngaySinh);
    getline(ss, a.thang, '/');
    getline(ss, a.ngay, '/');
    getline(ss, a.nam, '/');
    cin.ignore();
    getline(cin, a.diaChi);
    cin >> a.maSo >> a.ngayKi;
}
int cmp(NhanVien &a, NhanVien &b)
{
    if(a.nam > b.nam)
        return 0;
    if(a.nam < b.nam)
        return 1;
    if(a.thang > b.thang) 
        return 0;
    if(a.thang < b.thang) 
        return 1;
    if(a.ngay > b.ngay) 
        return 0;
    return 1;
}
void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}
void inds(NhanVien ds[], int N)
{
    for(int i = 0; i < N; i++)
    {
        cout << ds[i].maNV << ' ' << ds[i].hoTen << ' ' << ds[i].gioiTinh << ' '
        << ds[i].ngaySinh << ' ';
        cout << ds[i].diaChi << ' ' << ds[i].maSo << ' ' << ds[i].ngayKi;
        cout << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}