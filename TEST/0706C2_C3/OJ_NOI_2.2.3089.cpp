#include <stdio.h>
int fen(int n)
{
	if(n==0||n==1)return 1;
	else return fen(n-1)+fen(n-2);
} 
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	printf("%d\n",fen(n));
	return 0; 
}
