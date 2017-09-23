#include <iostream>
#include <cmath>
using namespace std;
//var
int r1,p,q,r,p1,q1,biggest=2,pp,qq,rr;
//function
int max(int c){
	int max=0;
	while(c!=0){
		if(c%10>=max)max=c%10;
		c/=10;
	}
	return max;
}
int zhuan(int c,int i){
	int s=0,c1=0,a;
	while(c!=0){
		a=pow(i,s);c1+=c%10*a;
		c/=10;s++;
	}
	return c1;
}
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>p>>q>>r;int ans=0;
	pp=max(p);qq=max(q);rr=max(r);
	if(pp>=biggest)biggest=pp;
	if(qq>=biggest)biggest=qq;
	if(rr>=biggest)biggest=rr;
	for(int i=biggest+1;i<=16;i++){
		r1=zhuan(r,i);p1=zhuan(p,i);q1=zhuan(q,i);
		if(r1==p1*q1){ans=i;break;}
	}
	cout<<ans<<endl;
	return 0;
}
