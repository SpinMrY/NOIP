#include<iostream>
#include<cstdio>
using namespace std;
int hc[]={6,2,5,5,4,5,6,3,7,6};
int count(int x){
	int ans,y;
	if(x==0)return 6;
	else{
		while(x>0){
			y=x%10;
			ans+=hc[y];
			x/=10;
		}
	}
	return ans;
}
int answ;
int main(){
	int a,b,c,d,n;
	ios::sync_with_stdio(false);
	cin>>n;
	n-=4;
	for(int i=0;i<=2000;i++){
		for(int j=0;j<=2000;j++){
			a=count(i);b=count(j);c=count(i+j);
			d=n-a-b;
			if(c==d){
				answ++;
			}
		}
	}
	cout<<answ<<endl;
	return 0;
}
