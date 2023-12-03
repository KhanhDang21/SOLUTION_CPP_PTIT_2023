#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
struct SinhVien 
{
	string maSinhVien;
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
		if(i < 9)
			ds[i].maSinhVien = "B20DCCN00" + to_string(i + 1);
		if(i >= 9 && i < 99)
			ds[i].maSinhVien = "B20DCCN0" + to_string(i + 1);
	}
}
void in(SinhVien ds[], int N)
{
	for(int i = 0; i < N; i++)
	{
		cout << ds[i].maSinhVien << ' ';
		for(int j = 0; j < ds[i].hoTen.size(); j++)
			ds[i].hoTen[j] = tolower(ds[i].hoTen[j]);
		stringstream ss(ds[i].hoTen);
		string meomeo;
		vector<string> res;
		while(ss >> meomeo)
		{
			meomeo[0] = toupper(meomeo[0]);
			res.push_back(meomeo);	
		}
		for(int k = 0; k < res.size(); k++)
			cout << res[k] << ' ';
		cout << ds[i].lopHoc << ' ';
		int ngay, thang, nam;
		sscanf(ds[i].ngaySinh.c_str(), "%d/%d/%d", &ngay, &thang, &nam);
		cout << setw(2) << setfill('0') << ngay << '/' << setw(2) << setfill('0') << thang << '/' << nam << ' ';
		cout << fixed << setprecision(2) << ds[i].diemGPA;
		cout << endl;
	}
}
void sapxep(SinhVien ds[], int N)
{
	for(int i = 0; i < N - 1; i++)
	{
		for(int j = i + 1; j < N; j++)
		{
			if(ds[j].diemGPA > ds[i].diemGPA)
				swap(ds[i], ds[j]);
		}
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}