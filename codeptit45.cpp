#include<iostream>
#include<sstream>
#include<string>
using namespace std;
 struct gv
 {
    int id=0;
    string name;
    string mon;
 };
void to_lower(string &s){
        for(int i = 0 ; i < s.length();i++){
            s[i]=tolower(s[i]);
        }
    }
   #include <sstream>
#include <string>
using namespace std;

string convert_mon(string s) {
    string str1 = "";
    stringstream ss(s);
    string tmp;
    
   
    while (ss >> tmp) {
        str1 += toupper(tmp[0]);
    }
    
    return str1;
}

 
int main(){
    int n; cin>>n;
    gv a[n];
    cin.ignore();
    for(int i = 0 ; i < n ; i++){
        a[i].id=i+1;
        getline(cin,a[i].name);
        getline(cin,a[i].mon);
        
    }
    int q; cin>>q;
    while(q--){
        string s;
        cin>>s;
        string str=s;
        to_lower(str);
        cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":"<<endl;
    for(int i = 0 ; i < n ; i++ ){
        string ten = a[i].name;
        to_lower(ten);
        if(ten.find(str) == string::npos){
            continue;
        }else{
            cout<<(a[i].id<10?"GV0":"GV")<<a[i].id<<" "
                <<a[i].name<<" "
                <<convert_mon(a[i].mon)<<endl;
        }
    }

    }
    return 0;
}