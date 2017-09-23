#include <cstdio>
#include <iostream>
using namespace std;
//define
int m,n,a[205],num;
//function
void work(int s,int t){
	for(int i=a[t-1];i<=s;i++){
		a[t]=i;s-=i;
		if(s==0&&t==n){num++;}
		else if(t<n)work(s,t+1);
		s+=i;
	}
}
int main(){
	a[0]=0;
	int js;
	scanf("%d",&js);
	for(int i=1;i<=js;i++){
		num=0;
		scanf("%d %d",&m,&n);
		work(m,1);
		printf("%d\n",num);
	}
	return 0;
}
