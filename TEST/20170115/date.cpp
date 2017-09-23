#include<stdio.h>
#include<math.h>
int a[10000000],n,m,i,j,k;
double b;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf%d",&b,&k);
		for(j=1;j<=k;j++)
		{
			m=floor(j*b);
			a[m]++;
		}
	}
	for(i=1;i<=1000000;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d",i);
			break;
		} 
	} 
}
