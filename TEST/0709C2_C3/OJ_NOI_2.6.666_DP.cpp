#include <iostream>
#include <cstdio>
using namespace std;
//define
int f[1050][1050],N,n,m;
//main
int main(){
	scanf("%d",&N);
	for(int t=1;t<=N;t++){
		scanf("%d%d",&m,&n);
		for(int i=1;i<=m;i++){
			f[0][i]=1;
		}
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if(j>i){f[i][j]=f[i][i];}
				else{f[i][j]=f[i][j-1]+f[i-j][j];}
			}
		}
		printf("%d\n",f[m][n]);
	}
	return 0;
}
