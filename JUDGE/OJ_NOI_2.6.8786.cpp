#include <iostream>
#include <cstdio>
using namespace std;
//define
int map[12][12],dp[12][12][12][12],n;
//main
int main(){
	ios<<sync_with_stdio(false);
	cin>>n;int x=0,y=0,r=0;
	while(1){
		cin>>x>>y>>r;
		if(x==0&&y==0&&r==0)return;
		else{map[x][y]=r;}
	}
	for(int i=1；i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int l=1;l<=n;l++){
				for(int k=1;i<=n;k++){
					if(i!=k&&j!=l){
						f[i][j][k][l]=
						max(f[i-1][j][k-1][l],
								max(f[i-1][j][k][l-1],
									max(f[i][j-1][k-1][l],f[i][j-1][k][l-1])
								)
							);
					}
					else{
						f[i][j][k][l]
					}
				}
			}
		}
	}
}
