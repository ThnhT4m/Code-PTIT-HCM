#include<iostream>
using namespace std;
    void sort(int a[] , int n){
        for(int i = n - 1  ; i >= 0 ; --i){
            for(int j = 0 ; j < i ; j++){
                if(a[j]>a[j+1]){
                    int tmp = a[j];
                    a[j]=a[j+1];
                    a[j+1] = tmp;
                }
            }
        }
    }
int main(){
    int t; cin>>t;
    while(t--){
     int n; cin>>n;
       int a[n];
       for(int &i : a){
        cin>>i;
       }
       sort(a,n);
       int i = 0 ;
    
     int j = n -1;
       while(i < n/2){
           
            cout<<a[j]<<" "<<a[i]<<" ";
            i++;
            j--;
       }
        if(n%2!=0){
            cout<<a[j];
        }
    cout<<endl;
    }
   

    return 0;
}