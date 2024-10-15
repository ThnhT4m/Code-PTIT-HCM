#include<iostream>
#include<fstream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
    void to_lower(string &s){
        for(int i = 0 ; i < s.length();i++){
            s[i]=tolower(s[i]);
        }
    }
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    ifstream inp1("DATA1.in");
    ifstream inp2("DATA2.in");
    map<string,int>mp1;
    map<string,int>mp2;
    string s;
    while(inp1>>s){
     to_lower(s);
        mp1[s]=1;
        mp2[s]=1;
    }
    while(inp2>>s){
        to_lower(s);
        mp1[s]=1;
        if(mp2[s]==1){
            mp2[s]=2;
        }
    }
    for(pair<string,int>it:mp1){
        cout<<it.first<<" ";
    }
    cout<<endl;
    
    for(pair<string,int>it:mp2){
        if(it.second==2){
            cout<<it.first<<" ";
        }
    }
    return 0;
}