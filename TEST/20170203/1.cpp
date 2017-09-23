#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int a[10]={0};
	int ct=0,ctx;
	for(int i=123;i<=329;i++){
		a[1]=i/100;a[2]=i/10%10;a[3]=i%10;
		a[4]=i*2/100;a[5]=i*2/10%10;a[6]=i*2%10;
		a[7]=i*3/100;a[8]=i*3/10%10;a[3]=i*3%10;
		ct=a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9];
		ctx=a[1]*a[2]*a[3]*a[4]*a[5]*a[6]*a[7]*a[8]*a[9];
		if(ct==45&&ctx==362880){cout<<i<<" "<<i*2<<" "<<i*3<<endl;break;}
	}	
	return 0;
}
