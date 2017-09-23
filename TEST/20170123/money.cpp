#include <iostream>
#include <cstdio>
using namespace std;

struct node{
	char name[30],gb,xb;
	int as=0,bs=0,lw=0,cont=0;
}a[110];

int n,t;

int main(){
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
		scanf("%s %d %d %c %c %d\n",&a[i].name,&a[i].as,&a[i].bs,&a[i].gb,&a[i].xb,&a[i].lw);
	}

	for(int i=1;i<=n;i++){
		if(a[i].as>80&&a[i].lw!=0)a[i].cont+=8000;
		if(a[i].as>85&&a[i].bs>80)a[i].cont+=4000;
		if(a[i].as>90)a[i].cont+=2000;
		if(a[i].as>85&&a[i].xb!='N')a[i].cont+=1000;
		if(a[i].bs>80&&a[i].gb!='N')a[i].cont+=850;
	}
	int max=-1,position,total=0;
	for(int i=1;i<=n;i++){
		total+=a[i].cont;
		if(a[i].cont>max){
			max==a[i].cont;
			position=i;
		}
	}
	printf("%s\n",a[position].name);
	printf("%d\n%d",a[position].cont,total);
	return 0;
}
