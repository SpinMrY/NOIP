#include <bits/stdc++.h>
using namespace std;
//define
int ans=10000000,n,min=10000000,h,now;
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n/3;i++){
		for(int j=i;j<=n/3;j++){
			if(n%(i*j)==0){
				h=n/(i*j);
				now=i*j*2+i*h*2+j*h*2;
				ans=ans<now?ans:now;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
