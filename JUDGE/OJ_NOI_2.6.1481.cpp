#include <iostream>
#include <cstdio>
using namespace std;
//define
int N,n,temp1,temp2,it1,jt1,f[50005],a[50005],ans[35];
//function
int d(int n1,int *a1){
	int sum=0,b=0;
	for(int i=1;i<=n;i++){
		if(b>0){
			b+=a[i];
		}else{
			b=a[i];
		}
		if(b>sum){
			sum=b;
		}
	}
	return sum;
}
//main
int main(){
	scanf("%d",&N);
	for(int F=1;F<=N;F++){
		scanf("\n %d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			ans[F]=d(n,a);
		}
	}
	for(int F=1;F<=N;F++){
		printf("%d\n",ans[F]);
	}
	return 0;
}
