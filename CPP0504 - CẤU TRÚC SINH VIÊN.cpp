#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
struct SinhVien
{
    string maSV, hoTen,  lop, ngaySinh;
    float GPA;
};
void nhap(SinhVien &a)
{
    getline(cin, a.hoTen);
    cin >> a.lop >> a.ngaySinh >> a.GPA;
    a.maSV = "B20DCCN001";
}
void in(SinhVien &a)
{
    cout << a.maSV << ' ' << a.hoTen << ' ' << a.lop << ' ';
    int ngay, thang, nam;
    sscanf(a.ngaySinh.c_str(), "%d/%d/%d", &ngay, &thang, &nam);
    cout << setw(2) << setfill('0') << ngay << '/' << setw(2) << setfill('0') << thang << '/' << nam << ' ';
    cout << fixed << setprecision(2) << a.GPA;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}