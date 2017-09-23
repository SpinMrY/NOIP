#include <stdio.h>
int main(){
	int n,i,j,a[30][100]={0},t=0,b=1,min,h[100]={0},w;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i][0]);
		while(scanf(",%d",&a[i][b])==1)b++;
		h[i]=b;
		b=1;
	}
	for(i=0;i<n;i++){
		for(j=0;j<h[i];j++){
			if(t<a[i][j]){t=a[i][j];w=i;}
		}
	}
	printf("%d\n%d",t,w+1);
	for(i=w+1;i<n;i++){
		for(j=0;j<h[i];j++){
			if(t==a[i][j]){printf(",%d",i+1);break;}
		}
	}
	return 0;
}
