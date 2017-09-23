#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;
//define
int a[1050][1050],f[1050][1050],n;
//main
int main(){
	memset(f,0x3f,sizeof(f));
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	f[1][1]=a[1][1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=1||j!=1){
				f[i][j]=min(f[i-1][j]+a[i][j],f[i][j-1]+a[i][j]);
			}
		}
	}
	printf("%d",f[n][n]);
	return 0;
}
