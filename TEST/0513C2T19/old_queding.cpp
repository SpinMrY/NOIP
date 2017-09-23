#include <iostream>
#include <cmath>
using namespace std;
//var
int ans,p,q,r,B;
//function
int zhuanhuan(int k,int a){
	int b=a;int mod=0,ret=0,flag=-1;
	while(b!=0){
		mod=b%k;b/=k;flag++;
		if(ret==0){
			ret=mod;
		}
		else ret=mod*(pow(10,flag))+ret;
	}
	return ret;
}
int kzhuanshi(int k,int a){
	int b=a;int mod=0,ret=0,flag=-1;
	while(b!=0){
		mod=b%10;b/=10;flag++;
		ret=ret+mod*(pow(k,flag));
	}
	return ret;
}
//main
int main(){
	ios::sync_with_stdio(false);
	/*cin>>p>>q>>r;
	ans=p*q;
	int tmp,tmp2;
	for(int i=2;i<=16;i++){
		tmp2=zhuanhuan(i,p)*zhuanhuan(i,q)
		tmp=zhuanhuan(i,tmp2);
		if(tmp==r){
			B=i;
			break;
		}
	}
	*/

	cout<<B<<endl;
	return 0;
}
