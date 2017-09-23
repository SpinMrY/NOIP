#include <stdio.h>
#include <string.h>
int main()
{
	int max=0,s=0,qimo,banji,lunwen,money,n,i;
	char name[30],maxname[30],ganbu,xibu;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		money=0;
		scanf("%s %d %d %c %c %d",name,&qimo,&banji,&ganbu,&xibu,&lunwen);
		if(qimo>80&&lunwen>=1)money+=8000;
		if(qimo>85&&banji>80)money+=4000;
		if(qimo>90)money+=2000;
		if(qimo>85&&xibu=='Y')money+=1000;
		if(banji>80&&ganbu=='Y')money+=850;
		s+=money;
		if(money>max){
			max=money;
			strcpy(maxname,name);
		}
	}
	printf("%s\n%d\n%d",maxname,max,s);
	return 0;
}
