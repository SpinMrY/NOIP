
#include <bits/stdc++.h>
using namespace std;
int a[10][10],ans,mina=100,b[10][10];
void print(int r,int c)
{
 printf("try %d:(%d,%d)\n",ans,r,c);
 for(int r=1;r<=4;r++)
 {
  for(int c=1;c<=4;c++)
   printf("%d",b[r][c]);
  puts("");
 }
}
void fan(int r,int c)
{
 ans++;
 b[r][c]=!b[r][c];
 if(r!=1)b[r-1][c]=!b[r-1][c];
 if(r!=4)b[r+1][c]=!b[r+1][c];
 if(c!=1)b[r][c-1]=!b[r][c-1];
 if(c!=4)b[r][c+1]=!b[r][c+1];
 //print(r,c);
}
int main()
{
 for(int r=1;r<=4;r++)
 {
  for(int c=1;c<=4;c++)
  {
   scanf("%c",&a[r][c]);
   a[r][c]=a[r][c]=='b'?1:0;
  }
  getchar();
 }
 for(int i=0;i<=1;i++)
  for(int j=0;j<=1;j++)
   for(int k=0;k<=1;k++)
    for(int l=0;l<=1;l++)
    {
	 memcpy(b,a,sizeof(a));
	 int flag=1;
	 ans=0;
     //print(0,0);
	 if(i)fan(1,1);
     if(j)fan(1,2);
     if(k)fan(1,3);
     if(l)fan(1,4);
     for(int r=1;r<=3;r++)
      for(int c=1;c<=4;c++)
       if(!b[r][c])fan(r+1,c);
     for(int r=1;r<=4;r++)
      for(int c=1;c<=4;c++)
       if(!b[r][c])flag=0;
     if(flag)mina=min(ans,mina);
    }
 for(int i=0;i<=1;i++)
  for(int j=0;j<=1;j++)
   for(int k=0;k<=1;k++)
    for(int l=0;l<=1;l++)
    {
     memcpy(b,a,sizeof(a));
	 int flag=1;
	 ans=0;
     //print(0,0);
	 if(i)fan(1,1);
     if(j)fan(1,2);
     if(k)fan(1,3);
     if(l)fan(1,4);
     for(int r=1;r<=3;r++)
      for(int c=1;c<=4;c++)
       if(b[r][c])fan(r+1,c);
     for(int r=1;r<=4;r++)
      for(int c=1;c<=4;c++)
       if(b[r][c])flag=0;
     if(flag)mina=min(ans,mina);
    }
 if(mina==100)printf("Impossible");
 else printf("%d",mina);
 return 0;
} 
