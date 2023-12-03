#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
struct ThiSinh
{
    float diem1, diem2, diem3, tongDiem;
    string hoTen, ngaySinh;
};
void nhap(ThiSinh &X)
{
    getline(cin, X.hoTen);
    cin >> X.ngaySinh >> X.diem1 >> X.diem2 >> X.diem3;
}
void in(ThiSinh &X)
{
    cout << X.hoTen << " " << X.ngaySinh << " " << fixed << setprecision(1) << X.diem1 + X.diem2 + X.diem3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}