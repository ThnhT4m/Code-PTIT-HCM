#include<iostream>
#include<map>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
 int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i < m ; i++){
        cin>>b[i];
    }
    map<int , int>mp;
    map<int,int >mp2;
    for(int i = 0 ; i < n ; i++){
        mp[a[i]]=1;
    }
    for(int i = 0 ; i < m ; i++){
        mp[b[i]]=1;
    }
    for(pair<int,int> it : mp){
        cout<<it.first<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        mp2[a[i]]=1;
    }
    for(int i = 0 ; i < m ; i++){
        if(mp2[b[i]]==1){
            mp2[b[i]]=2;
        }
    }
    for(pair<int,int> it : mp2){
        if(it.second==2){
            cout<<it.first<<" ";
        }
        
    }
    cout<<endl;
    }
   

    return 0;
}