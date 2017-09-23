#include <iostream>
using namespace std;
//define
int f[50][50][50][50];
int N,M,a[405],b[6];
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>a[i];
	}int temp=0;
	while(M--){
		cin>>temp;b[temp]++;
	}
	for(int i=0;i<=b[1];i++){
		for(int j=0;j<=b[2];j++){
			for(int k=0;k<=b[3];k++){
				for(int l=0;l<=b[4];l++){
					if(i!=0){
						f[i][j][k][l]=
						max(f[i-1][j][k][l],f[i][j][k][l]);
					}if(j!=0){
						f[i][j][k][l]=
						max(f[i][j-1][k][l],f[i][j][k][l]);
					}if(k!=0){
						f[i][j][k][l]=
						max(f[i][j][k-1][l],f[i][j][k][l]);
					}if(l!=0){
						f[i][j][k][l]=
						max(f[i][j][k][l-1],f[i][j][k][l]);
					}
					f[i][j][k][l]+=a[i+2*j+3*k+4*l];
				}
			}
		}
	}
	cout<<(f[b[1]][b[2]][b[3]][b[4]]+a[0])<<endl;
	return 0;
}
