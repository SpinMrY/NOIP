#include <bits/stdc++.h>
using namespace std;
//define
int f[1000005],s[1000005];
int r,n,ans;
//function
int search(int low,int high){
	int mid=(low+high)/2;
	while(low<=high){
		mid=low+high;mid/=2;
		if(s[mid]*2==s[r]){
			return mid;
		}else if(2*s[mid]>s[r]){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return mid;
}
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>r>>n;int templ,tempt,tempw,temph;
	for(int i=1;i<=n;i++){
		cin>>templ>>tempt>>tempw>>temph;
		for(int j=templ;j<templ+tempw;j++){
			f[j]+=temph;
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=0;j<i;j++){
			s[i]+=f[j];
		}
	}
	ans=search(1,r);
	int i;
	for(i=ans+1;i<=r;i++){
		if(s[i]!=s[ans])break;
	}
	ans=i-1;
	cout<<ans<<endl;
	return 0;
}
