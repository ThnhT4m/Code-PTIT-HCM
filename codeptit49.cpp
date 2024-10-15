#include<iostream>
#include<fstream>
#include<set>
using namespace std;
    void to_lower(string &s){
        for(int i = 0 ; i < s.length() ; i++){
            s[i]=tolower(s[i]);
        }
    }
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    ifstream inp("VANBAN.in");
    string s;
    set<string>st;
       while (inp>>s) {
        to_lower(s);
        st.insert(s);
    }
    for(set<string>::iterator it = st.begin(); it !=st.end() ;++it){
        cout<<*it<<endl;
    }

    return 0;
}