#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin>>a[i][j];
            }
        }
        int b[n][m]={0};
        
           for(int i=n-1;i>=n/2;i--){
			for(int j=n-i;j<=i;j++){
				b[n-i-1][j]=a[n-i-1][j-1];
				b[i][j-1]=a[i][j];
				b[j][i]=a[j-1][i];
				b[j-1][n-i-1]=a[j][n-i-1];
			}
		}
           for(int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < m ; j++ ){
                if(b[i][j]==0){
                    cout<<a[i][j]<<" ";
                }else{
                    cout<< b[i][j] << " ";
                }
            }
           }
           cout<<endl;
    }

    return 0;
}