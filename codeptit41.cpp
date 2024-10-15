#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip> 
#include <sstream> 
using namespace std;
    int cnt =0;

    struct nv{
        long ms =cnt;
        string ten;
        string gt;
        string c;
        string diachi;
        long long mst;
        string hd;
        int n,t,nam;



    };
    bool sortnt( nv A , nv B){
         A.t = (A.c[0] - '0') * 10 + A.c[1] - '0';
    A.n = (A.c[3] - '0') * 10 + A.c[4] - '0';
    A.nam = (A.c[6] - '0') * 1000 + (A.c[7] - '0') * 100 + (A.c[8] - '0') * 10 + (A.c[9] - '0');
    B.t = (B.c[0] - '0') * 10 + B.c[1] - '0';
    B.n = (B.c[3] - '0') * 10 + B.c[4] - '0';
    B.nam = (B.c[6] - '0') * 1000 + (B.c[7] - '0') * 100 + (B.c[8] - '0') * 10 + (B.c[9] - '0');
    
     if (A.nam < B.nam)return true;
    if (A.nam == B.nam && A.t < B.t)return true;
    if (A.nam == B.nam && A.t == B.t && A.n < B.n)return true;
    return false;
    }

int main(){
    int t; cin>>t;
    vector<nv>dsnv;
    cin.ignore();

    while(t--){
        ++cnt;
        nv nv1;
        getline(cin, nv1.ten);
        cin>>nv1.gt>>nv1.c;
        cin.ignore();
        getline(cin,nv1.diachi);
        cin>>nv1.mst;
        cin>>nv1.hd;
        cin.ignore();
        dsnv.push_back(nv1);
    }
        sort(dsnv.begin(),dsnv.end(),sortnt);
        for(int i = 0 ;  i < dsnv.size(); ++i){
            cout<<setw(5) << setfill('0')<<dsnv[i].ms<<" "
            <<dsnv[i].ten<<" "
            <<dsnv[i].gt<<" "
            <<dsnv[i].c<<" "
            <<dsnv[i].diachi<<" "
            <<dsnv[i].mst<<" "
            <<dsnv[i].hd<<endl;
        }
    return 0;
}