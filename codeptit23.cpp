#include<iostream>
using namespace std;
    struct phanso
    {
        long long tu;
        long long mau;
    };
    long long gcd(long long a , long long b){
        int temp;
        while(a!=0 && b !=0){
            if( a > b){
                a = a%b;
                temp = b;


            }else{
                b = b%a;
                temp = a;
            }
        }
        return temp;
    }
    void rg(phanso &ps){
        long long gcd1=gcd(ps.tu ,ps.mau);
        ps.tu=ps.tu/gcd1;
        ps.mau=ps.mau/gcd1;
    }
    long long bcnn(int a , int b){
        return (a*b)/gcd(a,b);
    }
    phanso sumps(phanso &ps1 , phanso &ps2){
       
        phanso ps3;
       ps3.mau=ps1.mau*ps2.mau;
       ps1.tu*=ps2.mau;
       ps2.tu*=ps1.mau;
       ps3.tu=ps1.tu+ps2.tu;
    return ps3;
    }
int main(){
    phanso ps1;
    cin>>ps1.tu;
    cin>>ps1.mau;
    phanso ps2;
    cin>>ps2.tu;
    cin>>ps2.mau;
    rg(ps1);
    rg(ps2);
   phanso ps3=sumps(ps1,ps2);
   rg(ps3);
   cout<<ps3.tu<<"/"<<ps3.mau;

    return 0;
}