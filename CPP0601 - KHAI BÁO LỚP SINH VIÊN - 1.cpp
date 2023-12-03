#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
class SinhVien
{
    private:
        string hoTen, lopHoc, ngaySinh;
        float diemGpa;
    public:
        void nhap()
        {
            getline(cin, hoTen);
            cin >> lopHoc >> ngaySinh;
            cin >> diemGpa;
        }
        void xuat()
        {
            cout << "B20DCCN001 ";
            cout << hoTen << ' ' << lopHoc << ' ';
            int ngay, thang, nam;
            sscanf(ngaySinh.c_str(), "%d/%d/%d", &ngay, &thang, &nam);
            cout << setw(2) << setfill('0') << ngay << '/' << setw(2) << setfill('0') << thang << '/' << nam << ' ';
            cout << fixed << setprecision(2) << diemGpa;
        }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}