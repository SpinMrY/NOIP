#include<cstdio>
using namespace std;
int a[1000002];
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	a[1]=1;
	a[2]=2;
	for(i=1;i<=n;i++)
	{ 
		scanf("%d",&k);
		for(j=3;j<=k;j++)
		{
			a[j]=(2*a[j-1]+a[j-2])%32767;
		}
		printf("%d\n",a[k]);
	}
	return 0;
}
