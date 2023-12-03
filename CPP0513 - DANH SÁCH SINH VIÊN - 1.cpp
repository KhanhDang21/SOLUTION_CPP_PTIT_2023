#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
struct SinhVien
{
	string hoTen, lopHoc, ngaySinh;
	float diemGPA;
};
void nhap(SinhVien ds[], int N)
{
	for(int i = 0; i < N; i++)
	{
		cin.ignore();
		getline(cin, ds[i].hoTen);
		cin >> ds[i].lopHoc >> ds[i].ngaySinh;
		cin >> ds[i].diemGPA;
	}
}
void in(SinhVien ds[], int N)
{
	int x = 1;
	for(int i = 0; i < N; i++)
	{
		printf("B20DCCN%.3d ", x);
		cout << ds[i].hoTen << ' ' << ds[i].lopHoc << ' ';
		int ng, th, n;
		sscanf(ds[i].ngaySinh.c_str(), "%d/%d/%d", &ng, &th, &n);
		cout << setw(2) << setfill('0') << ng << '/' << setw(2) << setfill('0') << th << '/' << n << ' ';
		cout << fixed << setprecision(2) << ds[i].diemGPA;
		cout << endl;
		x++;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}