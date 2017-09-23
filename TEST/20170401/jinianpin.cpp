#include <iostream>
#include <algorithm>
using namespace std;
//var
int l,r,w,n,a[30030],num;
//function

//main
int main(){
	ios::sync_with_stdio(false);
	cin>>w>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	l=0;r=n-1;
	while(l<=r){
		if(a[l]+a[r]<=w){
			l++;r--;
		}
		else r--;
		num++;
	}
	cout<<num<<endl;
	return 0;
}
