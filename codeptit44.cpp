#include<iostream>
#include<string>
using namespace std;
    struct sv{
        string mssv,ten,lop,email;
    };

int main(){
    int n; cin>>n;
    sv a[n];
    cin.ignore();
    for(int i = 0 ; i < n ; i++){
        getline(cin,a[i].mssv);
        getline(cin,a[i].ten);
        getline(cin,a[i].lop);
        getline(cin,a[i].email);
    }
    string s;
    int t; cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);
    for(int i = 0 ; i < s.length();i++){
        s[i]=toupper(s[i]);
    }
    cout<<"DANH SACH SINH VIEN NGANH "<<s<<":"<<endl;
    for(int i = 0 ; i < n ; i++){
        if(a[i].lop[0]=='E'&&(a[i].mssv[5]=='C'||a[i].mssv[5]=='A')){
            continue;
        }
        if(s[0]==a[i].mssv[5]){
            cout<<a[i].mssv<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].email<<endl;
        }
    }
    }
    



    return 0;
}