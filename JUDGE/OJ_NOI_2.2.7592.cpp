#include <stdio.h>
int main()
{
	int a,b,r;
	scanf("%d%d",&a,&b);
	while(a%b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("%d",b);
} 
