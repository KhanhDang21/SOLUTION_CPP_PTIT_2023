#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int cnt = 0;
class SinhVien
{
    private:
        string maSV, hoTen, lopHoc, ngaySinh;
        float diemGPA;
    public:
        SinhVien()
        {
            this -> maSV = "B20DCCN0";
            this -> hoTen = "";
            this -> lopHoc = "";
            this -> ngaySinh = "";
            this -> diemGPA = 0;
        }
        friend istream &operator >> (istream &is, SinhVien &a)
        {
            cnt++;
            is.ignore();
            if(cnt < 10)
                a.maSV += '0' + to_string(cnt);
            else
                a.maSV += to_string(cnt);
            string s;
            getline(is, s);
            stringstream ss(s);
            while(ss >> s)
            {
                for(int i = 0; i < s.size(); i++)
                    s[i] = tolower(s[i]);
                s[0] = toupper(s[0]);
                a.hoTen += s + ' ';
            }
            a.hoTen.erase(a.hoTen.end() - 1);
            getline(is, a.lopHoc);
            getline(is, a.ngaySinh);
            if(a.ngaySinh[2] != '/')
                a.ngaySinh = "0" + a.ngaySinh;
            if(a.ngaySinh[5] != '/')
                a.ngaySinh.insert(a.ngaySinh.begin() + 3, '0');
            is >> a.diemGPA;
            return is;
        }
        friend ostream &operator << (ostream &os, SinhVien &a)
        {
            os << a.maSV << ' ' << a.hoTen << ' ';
            os << a.lopHoc << ' ' << a.ngaySinh << ' ' << fixed << setprecision(2) << a.diemGPA << endl;
            return os;
        }
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}