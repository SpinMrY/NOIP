#include <cstdio>
#include <iostream>
using namespace std;
//define
int i,a[1001],dead,num;
//main
int main(){
    freopen("king.in","r",stdin);
    freopen("king.out","w",stdout);
	int n,k;
	scanf("%d%d", &n, &k);
    if(n==0&&k==0)return 0;
    for (i=1;i<=n;i++){
		a[i]=i;
	}
	for (i=1;;i++){
		if (i>n){
			i=i%n;
		}
		if (a[i]>0)num++;
		if (k==num && dead!=n-1){
            num=0;a[i]=0;dead++;
		}
		else if(k==num && dead==n-1){
			printf("%d",a[i]);
			break;
		}
	}
    fclose(stdin);
    fclose(stdout);
	return 0;
}
