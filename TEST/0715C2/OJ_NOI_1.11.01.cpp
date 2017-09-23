#include <bits/stdc++.h>
#define ll long long
using namespace std;
//define
ll n,a[100005],m,b[100005];
ll ans[100005],flag,min;
//function
void search(ll left,ll right,ll target){
	if(target<=a[1]){cout<<a[1]<<endl;return;}
	if(target>=a[n]){cout<<a[n]<<endl;return;}
	while(left<right){
		int mid=(left+right)/2;
		if(a[mid]>target)
			right=mid;
		else if(a[mid]<target)
			left=mid;
		else{
			left=mid;break;
		}
		if(left==right-1&&a[left]<target&&a[right]>target)break;
	}
	if(abs(a[left]-target)<=abs(a[right]-target))cout<<a[left]<<endl;
	else cout<<a[right]<<endl;
	return;
}
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++)cin>>b[i];
//	cout<<"work"<<endl;
	const int l=1;
	const int r=n;
	for(int i=1;i<=m;i++){
		search(l,r,b[i]);
	}
	return 0;
}
