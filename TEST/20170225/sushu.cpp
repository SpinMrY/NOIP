#include <iostream>
#include <cmath>
#include <cstdio>
int is_Prime(int x){
	if(x==1){
		return 1;
	}
	else{
		int a=sqrt(x);
		for(int i=2;i<=a;i++){
			if(x%i==0){
				return 1;
			}
			else{
				return 0;
			}
		}
	}
}
int output[10000005],ans[10000005],xiabiaoans=1;
using namespace std;
int main(){
	int n;
	ios::sync_with_stdio(false);
	cin>>n;
	int xiabiao=1;
	for(int i=1;i<n;i++){
		if(is_Prime(i)==0){
			output[xiabiao++]=i;
			cout<<output[xiabiao-1]<<endl;
		}
	}
	cout<<xiabiao<<endl;
/*	for(int i=1;i<=xiabiao;i++){
		if(is_Prime(i)==0){
			ans[xiabiaoans++]=output[i];
			cout<<ans[xiabiaoans-1]<<endl;
		}
	}
	cout<<xiabiaoans<<endl;
*/
	return 0;
}


