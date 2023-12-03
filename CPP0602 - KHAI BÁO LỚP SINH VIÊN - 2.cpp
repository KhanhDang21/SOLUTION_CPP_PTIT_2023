#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
class SinhVien
{
    private:
        string hoTen, lopHoc, ngaySinh;
        float diemGPA;
    public:
        friend istream &operator >> (istream &is, SinhVien &a);
        friend ostream &operator << (ostream &os, SinhVien &a);
};
istream &operator >> (istream &is, SinhVien &a)
{
    getline(is, a.hoTen);
    is >> a.lopHoc;
    is >> a.ngaySinh;
    is >> a.diemGPA;
    return is;
}
ostream &operator << (ostream &os, SinhVien &a)
{
    os << "B20DCCN001 " << a.hoTen << ' ' << a.lopHoc << ' ';
    int ngay, thang, nam;
    sscanf(a.ngaySinh.c_str(), "%d/%d/%d", &ngay, &thang, &nam);
    os << setw(2) << setfill('0') << ngay << '/' << setw(2) << setfill('0') << thang << '/' << nam << ' ';
    os << fixed << setprecision(2) << a.diemGPA;
    return os;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}