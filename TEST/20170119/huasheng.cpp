#include <iostream>
#include <cstdio>
#define maxn 27
using namespace std;
long abs1(long x){
	return (x>=0?x:-x);
}
int a[maxn][maxn];
int main(){
	long n,m,k,x,y,nowx,nowy,max,cost,ans;
	bool first;
	cin>>m>>n>>k;
	for(long i=1;i<=m;i++){
		for(long j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	ans=0;
	first=true;
	while(true){
		x=y=max=0;
		for(long i=1;i<=m;i++){
		  for(long j=1;j<=n;j++){
				if(max<a[i][j]){
					max=a[i][j];
					x=i;y=j;
				}
			}
		}
		a[x][y]=0;
		if(first){
			nowx=0;nowy=y;first=false;
		}
		cost=abs1(nowx-x)+abs1(nowy-y)+abs1(x)+1;
		if(k>=cost){
			ans+=max;
			k-=(abs1(nowx-x)+abs1(nowy-y)+1);
			nowx=x;nowy=y;
		}
		else break;
	}
	cout<<ans<<endl;
	return 0;
}
