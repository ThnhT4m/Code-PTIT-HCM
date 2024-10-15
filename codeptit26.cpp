#include<iostream>
using namespace std;
#include<string>

int main(){
   int t; cin>>t;
   while(t--){
        int n; cin>>n;
        int a[n];
        for(int &i:a){
            cin>>i;
        }
        int l = 0 , r=n-1;
        int cnt=0;
        while(l<=r){
            if(a[l]==a[r]){
                l++; r--;

            }
            else if(a[l]<a[r]){
                l++;
                a[l]+=a[l-1];
                cnt++;
            }else{
                r--;
                a[r]+=a[r+1];
                cnt++;
            }

        }
        cout<<cnt<<endl;
   }


    return 0;
}