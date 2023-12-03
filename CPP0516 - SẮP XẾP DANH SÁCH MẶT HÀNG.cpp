#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
struct MatHang
{
	int maMatHang;
	string tenMatHang, nhomHang;
	float giaMua, giaBan;
	float loiNhuan;
};
void nhap(MatHang ds[], int n)
{
	for(int i = 0; i < n; i++)
	{
		ds[i].maMatHang = i + 1;
		cin.ignore();
		getline(cin, ds[i].tenMatHang);
		getline(cin, ds[i].nhomHang);
		cin >> ds[i].giaMua >> ds[i].giaBan;
		ds[i].loiNhuan = ds[i].giaBan - ds[i].giaMua;
	}
}
void in(MatHang ds[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << ds[i].maMatHang << ' ' << ds[i].tenMatHang << ' ' << ds[i].nhomHang << ' ';
		cout <<  fixed << setprecision(2) << ds[i].loiNhuan;
		cout << endl;
	}
}
int cmp(MatHang &a, MatHang&b)
{
	if(b.loiNhuan > a.loiNhuan)
		return 0;
	return 1;
}
int main()
{
	int n;
	cin >> n;
	struct MatHang ds[n];
	nhap(ds, n);
	sort(ds, ds + n, cmp);
	in(ds, n);
	return 0;
}