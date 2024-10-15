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
    
int main(){
    phanso ps;
    cin>>ps.tu;
    cin>>ps.mau;
    rg(ps);
    cout<<ps.tu<<"/"<<ps.mau<<endl;

    return 0;
}