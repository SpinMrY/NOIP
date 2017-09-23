#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
long m=1;
void shu(long a,long qian){
	int hou;
	for(int i=qian;i<=sqrt(a);i++){
		if(a%i==0){
			hou=a/i;
			m++;
			shu(hou,i);
		}
	}
}
int main(){
	int n,a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		shu(a,2);
		printf("%d\n",m);
		m=1;
	}
	return 0;
}
