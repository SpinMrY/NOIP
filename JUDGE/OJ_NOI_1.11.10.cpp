
#include<bits/stdc++.h>
using namespace std;
//define
int lo,n,m,i,a[50002],l,r;

//main
int main(){
	scanf("%d%d%d",&lo,&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	r=a[n+1]=lo;
	l=1;
	while(l<=r){
		int mid=(l+r)/2,t=0,left=0;
		for(i=1;i<=n+1;i++)
			if(a[i]-a[left]<=mid)	t++;
			else	left=i;
		if(t<=m)	l=mid+1;
		else	r=mid-1;
	}
	cout<<l<<endl;
}
