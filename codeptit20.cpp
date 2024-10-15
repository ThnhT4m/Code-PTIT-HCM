#include<iostream>
#include <iomanip> 
using namespace std;
    struct sv
    {
        string ten;
        string ntns;
        float d1;
        float d2;
        float d3;
    };
    
int main(){
    sv sinhvien1;
    getline(cin,sinhvien1.ten);
   
    cin>>sinhvien1.ntns;
    cin>>sinhvien1.d1;
    cin>>sinhvien1.d2;
    cin>>sinhvien1.d3;
    double sum = sinhvien1.d1 + sinhvien1.d2 + sinhvien1.d3;
    cout<<sinhvien1.ten<<" "<<sinhvien1.ntns<<" "<<setprecision(1)<<fixed<<sum<<endl;

    return 0;
}