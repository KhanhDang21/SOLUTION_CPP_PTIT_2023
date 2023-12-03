#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
struct Point
{
    double x, y;
};
void input(Point &X)
{
    cin >> X.x >> X.y;
}
double distance(Point &A, Point &B)
{
    double res = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
    return res;
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}