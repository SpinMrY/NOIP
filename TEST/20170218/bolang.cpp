#include <iostream>
#include <cstdio>
using namespace std;
int a,b,c,d,e,i,j,k,n,x[100000007];
int main(){
	ios::sync_with_stdio(false);
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	for(i=a;i<=b;i++){
		for(j=1;j<=i-1;j++){
			for(k=0;k<=i-1;k++){
				n=0;
				if(j==k)continue;
				while(1){
					n=n*i+j;
					if(n>d)break;
					n=n*i+k;
					if(n>d)break;
					x[n]++;
				}
			}
		}
	}
	for(i=c;i<=d;i++){
		if(x[i]==e){
			printf("%d\n",i);
		}
	}
	return 0;
}
