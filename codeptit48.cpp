#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream inp("DATA.in");
    int nums;
    int cnt[1002]={0};
  while(inp>>nums){
    cnt[nums]++;
  }
    for(int i = 0 ; i < 1002 ; i++){
        if(cnt[i]>0){
            cout<<i<<" "<<cnt[i]<<endl;
        }
    }
    inp.close();


    return 0;
}