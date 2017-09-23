/*#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,a[105],b[105],num;
char m[105];
int con;
int is_huiwen(){ 
   for(int i=1,j=a[0];i<=j;i++,j--){
        if(a[i]!=a[j])return 0;
   } 
   printf("%d",num);
   return 1;
}
void compute(){
    for(int i=1;i<=a[0];i++){
        b[i]=a[a[0]-i+1];
    }
    for(int i=1;i<=a[0];i++){
        a[i]+=b[i];
    }
    for(int i=1;i<=a[0];i++){
        a[i+1]+=a[i]/n;
        a[i]%=n;
    }
    if(a[a[0]+1])a[0]++;
}
int main(){
    ios::sync_with_stdio(false);
    scanf("%d %s",&n,m);
    a[0]=strlen(m);
    for(int i=1;i<=a[0];i++){
        if(m[a[0]+1]>='0'&&m[a[0]+1]<='9'){
            a[i]=m[a[0]-i]-'0';
        }
        else{
            a[i]=m[a[0]-i]-'A'+10;
        }
    }
    while(num<=30){
        num++;
        compute();
        if(!is_huiwen()){
            return 0;
        }
    }
    cout<<"Impossible!"<<endl;
    return 0;
}
*/
#include<cstdio>
#include<cstring>
int n,a[105],b[105],num;
char m[105];
int is_huiwen()
{
	for(int i=1,j=a[0];i<=j;i++,j--)
		if(a[i]!=a[j])return 0;
	printf("%d",num);
	return 1;
}
void calc()
{
	for(int i=1;i<=a[0];i++)
		b[i]=a[a[0]-i+1];
	for(int i=1;i<=a[0];i++)
		a[i]+=b[i];
	for(int i=1;i<=a[0];i++)
	{
		a[i+1]+=a[i]/n;
		a[i]%=n;
	}
	if(a[a[0]+1])a[0]++;
}
int main()
{
  scanf("%d %s",&n,&m);
  a[0]=strlen(m);
  for(int i=1;i<=a[0];i++)
   if(m[a[0]-i]>='0'&&m[a[0]-i]<='9')a[i]=m[a[0]-i]-'0';
   else                              a[i]=m[a[0]-i]-'A'+10;
  if(is_huiwen())return 0;
  while(num<=30)
  {
    num++;
    calc();
    if(is_huiwen())return 0;
  }
  printf("Impossible!");
  return 0;
} 