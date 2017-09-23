#include <bits/stdc++.h>
using namespace std;
//define
int ans,sum,n;
//main
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int a1=0;a1<=n;a1++){
		for(int a2=0;a2<=n;a2++){
			for(int a3=0;a3<=n;a3++){
				if((a1+a2)%2==0 && (a2+a3)%3==0 && (a1+a2+a3)%5==0){
					ans=max(ans,a1+a2+a3);
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
