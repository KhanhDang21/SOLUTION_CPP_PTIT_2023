#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
class SinhVien
{
    private:
        string MSV, hoTen, lopHoc, ngaySinh;
        float diemGPA;
    public:
        SinhVien()
        {
            this -> MSV = "B20DCCN001";
            this -> hoTen = "";
            this -> lopHoc = "";
            this -> ngaySinh = "";
            this -> diemGPA = 0;
        }
        friend istream &operator >> (istream &is, SinhVien &a)
        {
            string s;
            getline(is, s);
            stringstream ss(s);
            string token;
            while(ss >> token)
            {
                token[0] = toupper(token[0]);
                for(int i = 1; i < token.length(); i++)
                    token[i] = tolower(token[i]);
                a.hoTen += token + " ";
            }
            a.hoTen.erase(a.hoTen.end() - 1);
            is >> a.lopHoc >> a.ngaySinh;
            is >> a.diemGPA;
            if(a.ngaySinh[2] != '/')
                a.ngaySinh.insert(a.ngaySinh.begin(), '0');
            if(a.ngaySinh[5] != '/')
                a.ngaySinh.insert(a.ngaySinh.begin() + 3, '0');
            return is;
        }
        friend ostream &operator << (ostream &os, SinhVien &a)
        {
            os << a.MSV << ' ' << a.hoTen << ' ' << a.lopHoc << ' '
            << a.ngaySinh << ' ' << fixed << setprecision(2) << a.diemGPA;
            return os;
        }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}