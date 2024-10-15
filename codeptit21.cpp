#include<iostream>
using namespace std;
    struct nhanvien
    {
        string msnv = "00001";
        string ten;
        string gt;
        string ntns;
        string dc;
        int mst;
        string date;
    };
    
int main(){
    nhanvien nv1;
    getline(cin,nv1.ten);
    cin>>nv1.gt;
    cin>>nv1.ntns;
    cin.ignore();
    getline(cin,nv1.dc);
      cin.ignore();
    cin>>nv1.mst;
    cin>>nv1.date;
    cout<<nv1.msnv<<" "<<nv1.ten<<" "<<nv1.gt<<" "<<nv1.ntns<<" "<<nv1.dc<<" "<<nv1.mst<<" "<<nv1.date<<endl;

    return 0;
}