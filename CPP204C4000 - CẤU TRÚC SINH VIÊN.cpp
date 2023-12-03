#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
struct SinhVien
{
    string maSV, hoTen, lopHoc;
    int ngay, thang, nam;
    float diemGPA;
};
void nhapThongTinSV(SinhVien &a)
{
    a.maSV = "N20DCCN001";
    getline(cin, a.hoTen);
    cin >> a.lopHoc;
    scanf("%d/%d/%d", &a.ngay, &a.thang, &a.nam);
    cin >> a.diemGPA;
}
void inThongTinSV(SinhVien &a)
{
    cout << a.maSV << ' ' << a.hoTen << ' ' << a.lopHoc << ' ';
    printf("%.2d/%.2d/%.2d ", a.ngay, a.thang, a.nam);
    cout << fixed << setprecision(2) << a.diemGPA;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}