#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int zi=0,mu=1,a,b,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d/%d",&a,&b);
		zi=zi*b+mu*a;
		mu=mu*b;
	}
	//cout<<zi<<" "<<mu<<endl;
	for(i=2;i<=zi&&i<=mu;i++){
		if(zi%i==0&&mu%i==0){
			zi/=i;
			mu/=i;
			i=1;
		}
	}
	if(mu==1)printf("%d",zi);
	else printf("%d/%d",zi,mu);
	return 0;
}
