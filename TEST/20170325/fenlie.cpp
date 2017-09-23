#include <iostream>
#include <cstdio>
int n,m1,m2,i,j,g,best,x,max,s[10011],a[101],b[101],c[101];
int main(){
	std::ios::sync_with_stdio(false);
	std::cin>>n>>m1>>m2;	
	for(i=1;i<=n;i++)
		std::cin>>s[i];
	for(i=2;i<=m1;i++){
		if(m1%i==0){
			g++;
			a[g]=i;
			b[g]=0;
		}
		while(m1%i==0){
			m1=m1/i;b[g]++;
		}
		b[g]=b[g]*m2;
	}
	best=-1;
	for(i=1;i<=n;i++){
		x=s[i];
		for(j=1;j<=g;j++){
			c[j]=0;
			while(x%a[j]==0){
				x=x/a[j];
				c[j]++;
			}
			
		}
		max=0;
		for(j=1;j<=g;j++){
			if(c[j]!=0&&max!=-1){
				x=(b[j]-1)/c[j]+1;
				if(x>max)max=x;
			}
			else
				max=-1;
			if(max!=-1)
				if(max<best||best==-1){
					best=max;
				}
		}
	}
	std::cout<<best<<std::endl;
	return 0;
}
