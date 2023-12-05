#include<bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        priority_queue<int> pqRow, pqColumn;
        for(int i = 0; i < n; i++)
        {
            int sum = 0;
            for(int j = 0; j < n; j++)
            {
                cin >> v[i][j];
                sum += v[i][j];
            }
            pqRow.push(sum);
        }
        for(int i = 0; i < n; i++)
        {
            int sum = 0;
            for(int j = 0; j < n; j++)
            {
                sum += v[j][i];
            }
            pqColumn.push(sum);
        }
        int maxRow = pqRow.top(), maxColumn = pqColumn.top();
        int sumAll = 0;
        while(!pqRow.empty())
        {
            sumAll += pqRow.top();
            pqRow.pop();
        }
        cout << max(maxColumn, maxRow) * n - sumAll << endl;
    }
    return 0;
}