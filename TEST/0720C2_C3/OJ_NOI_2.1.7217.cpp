#include<bits/stdc++.h>
using namespace std;
//main
int main(){
	int n,ans=1;
	scanf("%d",&n);
	if(n==0)printf("0");
	else if(n==1)printf("2");
	else if(n==2)printf("7");
	else{
		for(int i=1;i<=n;i++){
			ans*=n;
		}
		ans-=(n-1);
		printf("%d",ans);
	}
	return 0;	
}

