#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[15000000],n;

int ans=1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	};
	sort(a,a+n+1);
	for(int i=1;i<=n;i++){
		if(a[i]==a[i+1]){
			ans++;
		}
		else{
			cout<<a[i]<<" "<<ans<<endl;
			ans=1;
		}
	}
	return 0;
}
