#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
struct NhanVien
{
    string hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKi;
};
void nhap(NhanVien &x)
{ 
	cin.ignore();
    getline(cin, x.hoTen);
    cin >> x.gioiTinh >> x.ngaySinh;
   	cin.ignore();
	getline(cin, x.diaChi);
	cin >> x.maSoThue >> x.ngayKi;
}
void inds(NhanVien ds[], int n)
{
    int x = 1;
    for(int i = 0; i < n; i++)
    {
        printf("%.5d ", x);
        cout << ds[i].hoTen << ' ' << ds[i].gioiTinh << ' ';
        int ngsinh, tsinh, nsinh;
        sscanf(ds[i].ngaySinh.c_str(), "%d/%d/%d", &ngsinh, &tsinh, &nsinh);
        cout << setw(2) << setfill('0') << ngsinh << '/' << setw(2) << setfill('0') << tsinh << '/' << nsinh << ' ';
		cout << ds[i].diaChi << ' ' << ds[i].maSoThue << ' ';
		int ngki, tki, nki;
		sscanf(ds[i].ngayKi.c_str(), "%d/%d/%d", &ngki, &tki, &nki);
		cout << setw(2) << setfill('0') << ngki << '/' << setw(2) << setfill('0') << tki << '/' << nki;
        cout << endl;
        x++;
    }   
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}