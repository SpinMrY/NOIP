#include <iostrea>
#include <cstdio>
using namespace std;
//define
int n,x[30005];
//main
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",x[i]);
		lmax[0]=x[0];
		for(int i=0;i<n;i++){
			if(lmax[i-1]<=0){
				lmax[i]=x[i];
			}else{
				lmax[i]=lmax[i-1]+x[i];
			}
		}
		for(int i=1;i<n;i++){
			if(lmax[i]<lmax[i-1]){
				lmax[i]=lmax[i-1];
			}
		}
		rmax[n-1]=x[n-1];
		for(int i=n-2;i>=0;i--){
			if(rmax[i+1]<=0){
				rmax[i]=x[i];
			}
			else{
				rmax[i]=rmax[i+1]+x[i];
			}
		}
		for(int i=n-2;i>=0;i--){
			if(rmax[i]<rmax[i+1]){
				rmax[i]=rmax[i+1];
			}
		}
		ans=x[0]+x[1];
		for(int i=1;i<n;i++){
			sum=lmax
		}
	}
}
