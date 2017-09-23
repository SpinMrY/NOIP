#include <cstdio>
#include <iostream>
using namespace std;
//define
int x,y,n,m;
long long map[30][30],ans[30][30];
int main(){
//	ios::sync_with_stdio(false);
    freopen("noipc4.in","r",stdin);
    freopen("noipc4.out","w",stdout);
    scanf("%d %d %d %d",&n,&m,&x,&y);
	map[x][y]=2;
	map[x-1][y-2]=2;map[x-1][y+2]=2;
	map[x-2][y-1]=2;map[x-2][y+1]=2;
	map[x+1][y-2]=2;map[x+1][y+2]=2;
	map[x+2][y-1]=2;map[x+2][y+1]=2;
    ans[1][0]=1;
	for(int i=1;i<=n+1;i++){
		for(int j=1;j<=m+1;j++){
			ans[i][j]=ans[i-1][j]+ans[i][j-1];
			if(map[i-1][j-1]==2){
				ans[i][j]=0;}}}
	cout<<ans[n+1][m+1];
    fclose(stdin);fclose(stdout);
	return 0;
}
