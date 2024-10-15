#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#define F(i, a, b) for(int i = a; i < b; ++i)
using namespace std;

struct SV
{
    string msv, ten, lop;
    double d1, d2, d3;
};

bool cmp(SV a, SV b)
{
    return a.ten < b.ten;
}

int main()
{
    int t;
    cin >> t;
    SV a[t];
    F(i, 0, t)
    {
        cin.ignore();
        getline(cin, a[i].msv);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        cin >> a[i].d1 >> a[i].d2 >> a[i].d3;
    }
    sort(a, a + t, cmp);
    F(i, 0, t) cout << i + 1 << ' ' << a[i].msv << ' ' << a[i].ten << ' ' << a[i].lop << setprecision(1) << fixed << ' ' << a[i].d1 << ' ' << a[i].d2 << ' ' << a[i].d3 << endl;
    return 0;
}