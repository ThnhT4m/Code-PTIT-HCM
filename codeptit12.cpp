#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int b[n][m];
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin>>a[i][j];
                b[i][j]=0;
            }
        }
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ;j++){
                if(a[i][j]== 1){
                    for(int k = 0  ; k < m  ; k++){
                        b[i][k]=1;
                      
                    }
                }
            }
        }
          
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ;j++){
                if(a[i][j]== 1){
                    for(int k = 0  ; k < n  ; k++){
                        b[k][j]=1;
                      
                    }
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}