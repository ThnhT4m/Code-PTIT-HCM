#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    struct tt{
        string ten;
        string tuoi;

    };
    bool comparet( tt &t, tt &t2){
        int dayA;
        int monthA;
        int yearA;
        int dayB;
        int monthB;
        int yearB;
     sscanf(t.tuoi.c_str(), "%d/%d/%d", &dayA, &monthA, &yearA);
    sscanf(t2.tuoi.c_str(), "%d/%d/%d", &dayB, &monthB, &yearB);
    if(yearA != yearB){
        return yearA>yearB;

    }else if(monthA != monthB){
        return monthA>monthB;
    }else{
        return dayA>dayB;
    }
    
        
    }

int main(){
    int n; cin>>n;
    vector<tt> danhSach;
    cin.ignore();
    while(n--){
        tt t1;
        cin>>t1.ten;
        cin>>t1.tuoi;
        danhSach.push_back(t1);


    }
    sort(danhSach.begin(),danhSach.end(),comparet);
    
        cout<<danhSach[0].ten<<endl;
        cout<<danhSach[danhSach.size()-1].ten;
        cout<<endl;
    


    return 0;
}