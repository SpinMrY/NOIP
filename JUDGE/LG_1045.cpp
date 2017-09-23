#include <stdio.h>
#include <math.h>
#define MAXN 100000 
int e[MAXN],a[502],j;
long i,p;
int w1(){
	int k,l,t[502]={};
	for(k=0;k<501;k++)
	 for(l=0;l<501-k;l++)
	  t[k+l]+=a[k]*a[l];
	for(k=0;k<501;k++)
		a[k]=t[k];
	for(k=0;k<501;k++)
	 a[k+1]+=a[k]/10,a[k]%=10;
	a[501]=0;
	return 0; 
}
int w2(){
	int k;
	for(k=0;k<501;k++)
	 a[k]*=2;
	for(k=0;k<501;k++)
	 a[k+1]+=a[k]/10,a[k]%=10;
	a[501]=0;
	return 0; 
}
int work(){
	a[0]=2;
	double w;
	w=log10 (2)*p+1;
	w=int (w);
	printf("%.0lf",w);
	for (i=0;i<MAXN&&p;i++)
	 e[i]=p%2,p/=2;
	i-=2;
	for(;i>=0;i--)
	 if(e[i]){w1();w2();}
	 else     w1 ();
	a[0]--;
	if(w>=500)
	for (i=499;i>=0;i--){
		if(i%50==49)printf("\n");
		printf("%d",a[i]); 
	}
	else for (i=499;i>=0;i--){
			if(i%50==49)printf("\n");
			if(i+1>w) printf("0");
			else     printf("%d",a[i]);
		}
		return 0;
} 
int main(){
	scanf("%d",&p);
	work();
	return 0;
}
