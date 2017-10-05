#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
//define
struct node{
	int s,a;
}map[100000];
int n,m,i,mx,j,k,ans;
//function
bool cmp(const node &x,const node &y){
	int va=x.a,vb=y.a;
	if(x.s>mx)va+=(x.s-mx)*2;
	if(y.s>mx)vb+=(y.s-mx)*2;
	return (va>vb?1:0);
}
//main
int main(){
    ios::sync_with_stdio(false);
//    freopen("salesman.in","r",stdin);
//    freopen("salesman.out","w",stdout);
    bool b;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&map[i].s);
	for(i=0;i<n;i++)scanf("%d",&map[i].a);
	sort(map,map+n,cmp);
	for(i=0;i<n;i++){
		if(map[i].s>mx){b=true;mx=map[i].s;}
		else b=false;
		ans+=map[i].a;
		cout<<(mx*2+ans)<<endl;
		if(b==true)sort(map+i+1,map+n,cmp);
	}
	return 0;
}
