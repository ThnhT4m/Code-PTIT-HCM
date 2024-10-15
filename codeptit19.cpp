#include<iostream>
#include<string>
#include<set>
#include<map>

using namespace std;
  
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
       int s[n];
       for(int i = 0 ; i < n ; i++){
        cin>>s[i];
       }
       set<int>v;
       string s1 ="";
       for(int i = 0 ; i < n ; i++){
        s1 += to_string(s[i]);
            for(int j = 0 ; j < s1.length(); j++){
                v.insert(stoi(to_string(s1[j]))-48);
            }
            
            s1="";
       }
   
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
} 

return 0;
}